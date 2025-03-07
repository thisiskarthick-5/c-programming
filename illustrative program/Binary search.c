#include <stdio.h>


int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    
    while (left <= right) {
        int mid = left + (right - left) / 2; 

        
        if (arr[mid] == target) {
            return mid;  
        }

        
        if (arr[mid] < target) {
            left = mid + 1;
        }
        
        else {
            right = mid - 1;
        }
    }

    
    return -1;
}

int main() {
    
    int arr[] = {2, 4, 7, 10, 15, 20, 25, 30, 35, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 40;

    
    int result = binarySearch(arr, size, target);

    
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}

