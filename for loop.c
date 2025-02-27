
//syntax
/*for (expression 1; expression 2; expression 3) {
   code block to be executed
}*/

 
#include<stdio.h>


int main(){
    
    int i;
    int e;
    printf("Enter the End value : ");
    scanf("%d",&e);
    
    //even numbers
    printf("even number\n");
    for(i=0;i<e;i+=2){
        printf("\n%d",i);
    }    
    
    //for odd numbers
    printf("\nodd number\n");
    for(i=1;i<e;i+=2){
        printf("\n%d",i);
    }
    return 0;    
    
}
