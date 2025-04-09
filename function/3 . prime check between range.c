#include <stdio.h>

int prime_check();

int main(){
    int start,stop;
    
    printf("enter the start value : ");
    scanf("%d", &start);
    
    printf("enter the end value : ");
    scanf("%d", &stop);
    
    for(int i = start; i < stop ; i++){
        if(prime_check(i) == 1){
            printf("THE NUMBER %d IS PRIME\n",i);
        };  
            
    };
    return 0;
}

int prime_check(int n){
    if(n < 0){
        return 0;
    }
    
    for(int j = 2 ; j < n; j++){
        if(n % j == 0){
            return 0;
        }
        
    }
    return 1;
}
