#include <stdio.h>
/*
name : karthick
program : multiplication mutable
*/
int main(){
    int num,r;
    
    
    printf("enter the number : ");
    scanf("%d",&num);
    
    printf("enter the range : ");
    scanf("%d",&r);
    
    int i;
    for(i=1;i<=r;i++){
        printf(" %d x %d = %d\n",num,i,num*i);
    }
}
