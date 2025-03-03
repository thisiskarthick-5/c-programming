#include <stdio.h>
#include <math.h>

void power(int base,int expo){
    int result;
    if(expo == 1){
        printf("the %d to the power of %d is : %d",base,expo,base);
    }
    else{
        
        result = pow(base,expo-1);
        printf("the %d to the power of %d is : %d",base ,  expo, base*result);
    }
}

int main(){
    int base;
    int expo;
    
    printf("enter the base value : ");
    scanf("%d",&base);
    
    printf("enter the exponent value : ");
    scanf("%d",&expo);
    
    power(base,expo);
    return 0;
    
    
    
}
