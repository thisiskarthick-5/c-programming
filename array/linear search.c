#include <stdio.h>
int i;

//function for linear serach

int ls(int arr[],int target,int size){
    for(i=0;i<size;i++){
        if(target == arr[i]){
            return i;
        }
    }
    return -1;
    
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target ;
    printf("ENTER THE TARGET ELEMENT : ");
    scanf("%d", &target);
    
    
    int result = ls(arr,target,size);
    if(result != -1){
        printf("ELEMENT FOUND AT :%d",result);
    }
    else{
        printf("ELEMENT NOT FOUND");
        
    }
}

