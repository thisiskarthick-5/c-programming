#include <stdio.h>
#include <string.h>

int main(){
    //string functions
    
    //1. length
    char name[] = "karthick";
    printf("%d", strlen(name));

    //2.concatenation
    char str1[] = "hello";
    char str2[] = "world";
    strcat(str1,str2);
    printf("\n%s",str1);
    
    //3.copy 
    char str3[20];
    strcpy(str3,str1);
    printf("\n%s",str3);
    
    //4.compare
    printf("\n%d",strcmp(str3,str2));
    
    
    
    
}
