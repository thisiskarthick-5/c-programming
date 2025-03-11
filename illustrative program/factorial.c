#include <stdio.h>
int num ;


int main(){
    int fact ;
    fact = 1;
    
    printf("enter the range : ");
    scanf("%d", &num);
    
    int i ;
    
    for(i=1;i<=num;i++){
        fact *= i;
        
    }
    printf("the factorial of the number is : %d",fact);
}
