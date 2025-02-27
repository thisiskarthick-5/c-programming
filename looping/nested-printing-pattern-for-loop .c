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

    \\sqaure pattern
    for(int i=1;i<=row;i++){
    	for(int j =1;j<=row;j++){
        	printf("*");
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

    \\full pyramid
    for(int i=1;i<=row;i++){
    	for(int j =1;j<=row-i;j++){
        	printf(" ");
        }
        for (int k=1;k<=2*i-1;k++){
        	printf("*");
        }
        printf("\n");
    }

    \\reverse of whole pyramid
    for(int i=row;i>=1;i--){
    	for(int j =1;j<=row-i;j++){
        	printf(" ");
        }
        for (int k=1;k<=2*i-1;k++){
        	printf("*");
        }
        printf("\n");
    }
    
    
    
    return 0;
    
}
