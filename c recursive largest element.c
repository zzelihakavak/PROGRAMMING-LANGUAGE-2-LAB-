#include <stdio.h>

int findMax(int arr[], int size) {
    if (size == 1) 
        return arr[0];
    else {
        int max = findMax(arr, size - 1); 
        if (arr[size - 1] > max) 
            return arr[size - 1]; 
        else
            return max; 
    }
}

int main() {
    int arr[] = {50, 43, 36, 72, 5, 75,660};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = findMax(arr, n);
    printf("Largest element is: %d", max);
    return 0;
}