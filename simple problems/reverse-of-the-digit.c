// sum of digit
#include <stdio.h>
int main(){
    int rev,n,a;
    rev = 0;
    n = 123;
    while(n>0){
        a = n%10;
        rev = rev*10+a;
        n/=10;
    }
    
    
    printf("REVERSE : %d ",rev);
    return 0;
}
