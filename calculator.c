#include <stdio.h>
int main(){
    float num1 , num2;
    char sign;
    
    printf("ENTER FIRST NUMBER : ");
    scanf("%f",&num1);
    
    printf("\nENTER THE SIGN (+ - * /) : ");
    scanf(" %c", &sign);
    
    printf("\nENTER THE SECOND NUMBER : ");
    scanf("%f",&num2);
    
    switch(sign){
        case '+':
            printf( "\n%.1f + %.2f = %.1f",num1,num2,num1+num2);
            break;
            
        case '-' :
            printf("\n%.1f - %.1f = %.1f",num1,num2,num1-num2);
            break;
            
        case '*':
            printf("\n%.1f * %.1f = %.1f",num1,num2,num1*num2);
            break;
            
        case '/':
            if (num2 != 0){
                printf("\n%.1f / %.1f = %.1f ",num1,num2,num1/num2);
                break;
            }else{
                printf("\nZERO DIVISION ERROR");
                break;
            }
        default:
            printf("\nGIVE ME CORRECT INPUT");
            break;
            
    }        
    return 0;
}
