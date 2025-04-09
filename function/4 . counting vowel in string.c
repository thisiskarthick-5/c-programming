// count vowel in string

#include <stdio.h>

int vowel_count();

int main(){
    
    char str[10];
    printf("enter the string : ");
    scanf("%s",str);
    
    printf("\n------------------------------------------------\n\n");
    printf(" count of vowel in string : %d\n",vowel_count(str));
    printf("------------------------------------------------\n\n");
    
    return 0;
}

int vowel_count(char str[100]){
    int count = 0;
    for(int i = 0; str[i] != '\0';i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            printf("THE CHATRACTER NUMBER \" %d \" and CHATRACTER \"%c\" is vowel\n",i,str[i]);
            count++;
            
        }
    }
    
    return count;
}
