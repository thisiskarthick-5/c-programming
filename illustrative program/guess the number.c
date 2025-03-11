#include<stdio.h>

/*
  programmer - name : karthick
  program : guess the number;
*/

int main(){
    int guess,secret = 43;
    
    printf("guess the number fro 1 to 100\n");
    
    printf("enter the guess number : ");
    scanf("%d",&guess);
    
    if(guess < secret){
        printf("too loww");
    }
    else if(guess > secret){
        printf("too high");
    }
    else{
        printf("congratulation ! you won");
    }
}
