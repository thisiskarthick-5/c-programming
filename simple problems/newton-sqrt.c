#include <stdio.h>
int root;

void nsqrt(int n){
    int i;
    root = n/2;
    for(i=0;i<10;i++){
        root =  (root+n/root)/2;
        
    }
    printf("square root : %d ",root);
    
    
}

int main(){
    int n;
    printf("enter the input : ");
    scanf("%d",&n);
    
    nsqrt(n);
    return 0;
    
}
