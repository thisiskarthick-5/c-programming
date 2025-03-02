// greatest of three number 

#include <stdio.h>
int main(){
    int n1,n2,n3;
    
    printf("ENTER THE FIRST NUMBER : ");
    scanf("%d",&n1);
    
    printf("ENTER THE SECOND NUMBER : ");
    scanf("%d",&n2);
    
    printf("ENTER THE THIRD NUMBER : ");
    scanf("%d",&n3);
    
    if(n1>n2){
        if(n1>n3){
            printf("THE NUMBER %d IS GREATEST",n1);
        }else{
            printf("THE NUMBER %d IS GREATEST" ,n2);
        }
    }
    
    else{
        if(n2>n3){
            printf("THE NUMBER %d IS GREATEST",n2);
        }
        else{
            printf("THE NUMBER %d IS GREATEST",n3);
        }
    }
    return 0;
}
