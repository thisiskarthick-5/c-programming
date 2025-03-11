#include <stdio.h>

/*

 name : karthick
 program :  greatest of three number 

*/

int main(){
    int a , b , c;
    int i = 0;
    
    printf("ENTER THE NUMBER 1   : ");
    scanf("%d",&a);
    
    printf("ENTER THE NUMBER 2   : ");
    scanf("%d",&b);
    
    printf("ENTER THE NUMBER 3  : ");
    scanf("%d",&c);
    
    if(a>b && a>c){
        printf("the gratest number is : %d",a);
    }
    else if(b>a && b>c){
        printf("the greates number is : %d",b);
    }
    else{
        printf("the gratest number is : %d",c);
    }
    return 0;
}

 
