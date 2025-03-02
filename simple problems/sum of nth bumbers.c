// sum of number 

#include <stdio.h>
int main(){
    int i,sum,n;
    sum = 0;
    n = 10;
    i = 1;
    while(i<=n){
        sum = sum + i;
        i++;
        
    }
    for(i=1;i<=n;i++){
        sum = sum+i;
        
    }
  
    printf("THE SUM : %d",sum);
    return 0;
}
