#include <stdio.h>
int main(){
    int n1,n2,i,gcd;
    
    printf("enter the number 1:");
    scanf("%d",&n1);
    
    printf("enter the number 2 :");
    scanf("%d",&n2);
    
    for(i=1;i<n1+1;i++){
        if(n1%i==0 && n2%i==0){
            gcd = i;
            
        }
        
    }
    printf("the gcd : %d",gcd);
    return 0;
    
    
}
