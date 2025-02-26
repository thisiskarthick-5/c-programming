

#include<stdio.h>
int main(){
    //user input 
    
    int year;
    printf("ENTER THE YEAR : ");
    scanf("%d",&year);
    
    /*if(year%4==0){
        printf("%d YEAR IS LEAP YEAR",year);
        
    }else{
        printf("%d YEAR IS NOT LEAP YEAR",year);
    }*/

  //using short hand if , else , else if
    int result = (year%4==0) ? printf("%d YEAR IS LEAP YEAR ",year) : printf("%d YEAR IS NOT LEAP YEAR",year);
    
    
    return 0;
    

    
    
}

