//calculator

#include <stdio.h>

void add(int n1,int n2){
    printf("the sum : %d",n1+n2);
}



void mul(int n1,int n2){
    printf("\nthe multiple : %d",n1*n2);
}

void sub(int n1,int n2){
    printf("\nthe subtract  : %d",n1-n2);
}

void divs(int n1,int n2){
    printf("\nthe division : %d",n1/n2);
}

int main(){
    int n1,n2;
    
    printf("enter the number 1 :");
    scanf("%d", &n1);
    
    printf("enter the number 2 : ");
    scanf("%d", &n2);
    
    add(n1,n2);
    mul(n1,n2);
    sub(n1,n2);
    divs(n1,n2);
    
    return 0;
    
    
    
    
    
    
    
}
