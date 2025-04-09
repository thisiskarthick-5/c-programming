//reverse string
#include <stdio.h>

void string_rev();

int main(){
    char str[100];
    printf("enter the string : ");
    scanf("%s",str);
    
    //function call
    string_rev(str);
    return 0;
    
}

void string_rev(char str[100]){
    int size = sizeof(str)/sizeof(str[0]);
    for(int i = size ; i >= 0 ; i--){
        printf("%c",str[i]);
        
    }
}

