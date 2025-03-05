#include <stdio.h>
#define PI 3.

//calculator function
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int divs(int a,int b);

int main(){
    int a,b,area , r;
    printf("ENTER THE NUMBER 1 : ");
    scanf("%d",&a);
    
    printf("ENTER THE NUMBER 2 :");
    scanf("%d",&b);
    
    printf("ENTER THE RADIUS : ");
    scanf("%d",&r);
    
    area = PI*r*r;
    
    printf("AREA : %d\n",area);
    
    add(a,b);
    sub(a,b);
    mul(a,b);
    divs(a,b);
    
    return 0;
}

int add(int a, int b){
    printf("ADDITION : %d",a+b);
    
}

int sub(int a, int b){
    printf("\nSUBSTRACTION : %d",a-b);
    
}
int mul(int a, int b){
    printf("\nMULTIPLICATION : %d",a*b);
    
}

int divs(int a, int b){
    printf("\nDIVISION : %d",a/b);
    
}

