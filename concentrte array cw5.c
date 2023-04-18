#include <stdio.h>

void concatenateArrays(int arr1[], int arr2[], int n1, int n2) {
    int i, j;
    int result[n1 + n2];
    for (i = 0; i < n1; i++) {
        result[i] = arr1[i];
    }
    for (j = 0; j < n2; j++) {
        result[i + j] = arr2[j];
    }
    printf("Concatenated array: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", result[i]);
    }
}

int main() {
    int arr1[] = {10, 20, 30, 40, 50, 60};
    int arr2[] = {70, 80, 90, 100, 110, 120};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    concatenateArrays(arr1, arr2, n1, n2);
    
    return 0;
}
