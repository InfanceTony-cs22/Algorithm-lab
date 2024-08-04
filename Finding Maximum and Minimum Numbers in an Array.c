#include <stdio.h>

void findMinMax(int arr[], int n, int* min, int* max) {
    *min = arr[0];
    *max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < *min)
            *min = arr[i];
        if (arr[i] > *max)
            *max = arr[i];
    }
}

int main() {
    int arr[] = {12, 1234, 45, 67, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min, max;
    findMinMax(arr, n, &min, &max);
    printf("Minimum element is %d\n", min);
    printf("Maximum element is %d\n", max);
    return 0;
}
