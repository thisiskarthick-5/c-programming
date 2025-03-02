// sum of digit
#include <stdio.h>
int main(){
    int rev,n,a,dup;
    rev = 0;
    n = 121;
    dup = n;
    while(n>0){
        a = n%10;
        rev = rev*10+a;
        n/=10;
    }
    
    if(dup == rev){
        printf("THE NUMBER %d IS PALINDROME",dup);
    }else{
        printf("THE NUMBER %d IS NOT PALINDROME",dup);
    }
    
    
    
    return 0;
}
