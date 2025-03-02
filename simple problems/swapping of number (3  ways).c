// swapping of two number

#include <stdio.h>
int main(){
    int a,b,temp;
    a = 10;
    b = 20;
    printf("THE SWAPPING BEFORE \n a = %d \n b = %d",a,b);

  // method 1
    temp = a;
    a = b;
    b = temp;

  // method 2
    a = a+b;
    b = a-b;
    a = a-b;

  //method
    a = a*b;
    b = a/b;
    a = a/b;

  
  
    
    
    printf("\nTHE SWAPPING AFTER \n a = %d \n b = %d",a,b);
    
    
    
}
