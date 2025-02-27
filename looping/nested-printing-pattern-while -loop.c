#include<stdio.h>
int main(){
  
	int row =5 ;
  \\ half pattern
    int i = 1;
    while(i<=row){
    	int j = 1;
        while(j<=i){
        	printf("*");
            j++;
    	}
        i++;
        printf("\n");
    }

  \\ reverse of the above loop
   int i = row;
    while(i>=1){
    	int j = 1;
        while(j<=i){
        	printf("*");
            j++;
    	}
        i--;
        printf("\n");
    }

  \\square pattern
  while(i<=row){
    	int j = 1;
    	while(j <=row){
        	printf("*");
            j++;
        }
        i++;
        printf("\n");
    }

  \\full pyramid
   while(i<=row){
    	int j=1;
        while(j <= row -i){
        	printf(" ");
            j++;
        }
        
        int k=1;
        while(k <= 2 * i - 1){
        	printf("*");
            k++;
        }
        i++;
        printf("\n");
   }    

  //reverse of full pyramid
  while(i>=1){
    	int j=1;
        while(j <= row -i){
        	printf(" ");
            j++;
        }
        
        int k=1;
        while(k <= 2 * i - 1){
        	printf("*");
            k++;
        }
        i--;
        printf("\n");
   }     

  
    
    
    return 0;
    }
