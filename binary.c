#include <stdio.h>

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
       
        if (arr[mid] == target) 
            return mid;
       
        if (arr[mid] < target) 
            left = mid + 1;
        
   
        else 
            right = mid - 1;
    }
 
    return -1;
}

int main() {
    int arr[] = {2, 3, 12, 34, 54};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 12;
    
    int result = binarySearch(arr, 0, n - 1, target);
    
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found in array\n");
    
    return 0;
}
