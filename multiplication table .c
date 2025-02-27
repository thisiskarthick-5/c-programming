/*for (expression 1; expression 2; expression 3) {
   code block to be executed
}*/
#include<stdio.h>
int main(){
    
    int i;
    
    int num;
    printf("Enter the Number : ");
    scanf("%d",&num);
    
    int e;
    printf("Enter the End Value : ");
    scanf("%d",&e);
    
    for(i=1 ;i<=e;i++){
        printf("\n%d x %d = %d",num,i,num*i);
        
    }
    
    return 0;
  
}
