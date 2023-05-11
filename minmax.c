#include <stdio.h>
#include <limits.h>

void findMinMax(int arr[], int low, int high, int *min, int *max) {
    int mid, minLeft, maxLeft, minRight, maxRight;
    
    // Base case for recursion, array has only one element
    if (low == high) {
        *min = *max = arr[low];
        return;
    }
    
    // Array has two elements
    if (high == low + 1) {
        if (arr[low] < arr[high]) {
            *min = arr[low];
            *max = arr[high];
        } else {
            *min = arr[high];
            *max = arr[low];
        }
        return;
    }
    
    // Array has more than two elements
    mid = (low + high) / 2;
    findMinMax(arr, low, mid, &minLeft, &maxLeft);
    findMinMax(arr, mid + 1, high, &minRight, &maxRight);
    
    // Determine the minimum and maximum values in the array
    if (minLeft < minRight) {
        *min = minLeft;
    } else {
        *min = minRight;
    }
    if (maxLeft > maxRight) {
        *max = maxLeft;
    } else {
        *max = maxRight;
    }
}

int main() {
    int arr[] = {1, 6, 2, 8, 3, 10, 4, 7, 5, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min, max;
    
    findMinMax(arr, 0, n - 1, &min, &max);
    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);
    
    return 0;
}
