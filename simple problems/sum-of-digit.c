// sum of digit
#include <stdio.h>
int main(){
    int sum,n,a;
    sum = 0;
    n = 123;
    
    while(n>0){
        a = n%10;
        sum += a;
        n/=10;
        
    }
    printf("THE SUM : %d ",sum);
    return 0;
}
