#include<stdio.h>
int main(){
    int row;
    printf("ENTER THE ROW : ");
    scanf("%d", &row);
    
    \\number patter
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }

    \\star
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    
    
    return 0;
    
}
