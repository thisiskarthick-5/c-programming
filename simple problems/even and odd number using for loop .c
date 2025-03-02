#include <stdio.h>
int main(){
    int i;
    int n = 10;
    printf("EVNE NUMBERS");
    for(i=0;i<n;i+=2){
        printf("\n%d",i);
    }
    printf("\nODD NUMBERs");
    for (i=1;i<n;i+=2){
        printf("\n%d",i);
    }
    return 0;
}
