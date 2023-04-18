#include <stdio.h>
#include <stdlib.h>

double my_atof_func(char *str){
    double result = 0.0 ;
    double decimal = 0.1 ;
    int index = 0 ;
    int sign = 1 ;
    int has_decimal= 0;
    int has_non_numeric = 0;

    if(str[0]=='-'){
        sign = -1;
        index++;
    }

    while(str[index]!='\0'){
        if(str[index]>='0' && str[index]<='9'){
            if(has_decimal){
                result += (str[index]-'0')*decimal;
                decimal = decimal * 0.1 ;
            }else{
                result = result*10 + (str[index] - '0');
            }
        }
        else if(str[index]=='.'){
            if(has_decimal){
                printf("error: multiple decimal");
                return 0.0;
            }else{
                has_decimal = 1;
            }
        }
        else{
            has_non_numeric = 1;
            break;
        }
        index++;
    }

    if(has_non_numeric){
        printf("Error: Invalid String\n");
        return 0.0;
    }

    return sign*result;
}

int main(){
    char str[100];
    printf("Enter a string:\n");
    scanf("%s", str);
    double value = my_atof_func(str);
    printf("it will be %f\n", value);
    return 0 ;
}

