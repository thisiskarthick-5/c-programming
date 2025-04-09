//prime or not

#include <stdio.h>

int prime_check();


int main(){
    int num;
    printf("enter the number to check prime or not : ");
    scanf("%d",&num);
    
    
    return 0;
    
}

int prime_check(int input){
    
    if(input < 0){
        return 0;
    }
    
    for(int i = 2; i < input ; i++){
        if(input % i == 0){
            return 0;
        }
    }
    return 1;
}
