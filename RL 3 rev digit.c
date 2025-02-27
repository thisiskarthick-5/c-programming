//reverse of the digit

#include <stdio.h>

int main()
{
    int n,a;
    int rev = 0;
    printf("Enter the digit : ");
    scanf("%d",&n);
    
    
    
    while(n>0){
        rev = rev*10+n%10;
        n = n/10;
    }
    printf("the reverse of the digit : %d",rev);
    return 0;
}
