#include <stdio.h>

int fact();

int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    
    if(n<0){
        printf("entered number is negative");
        
    }
    else{
        printf("the factiorial of %d is %d",n,fact(n) );
    }
}

int fact(int a){
    if(a == 0|| a == 1){
        return 1;
    }
    else{
        return a * fact(a-1);
    }
    
    
}
