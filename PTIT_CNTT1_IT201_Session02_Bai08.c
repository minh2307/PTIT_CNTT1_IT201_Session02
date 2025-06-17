#include <stdio.h>
#include <stdlib.h>

int find_leaders(int* arr, int n) {
    int max = arr[n-1];
    for (int i = n-2; i >= 0; i--) {
        if (arr[i] > max) {
            printf("%d ", arr[i]);
            max = arr[i];
        }
    }
    printf("%d ", arr[n-1]);
}

int main() {
    // int arr[7] = {1,1,2,3,9,7,2};
    int n = 7;
    int* arr = (int *)calloc(100, sizeof(int));
    printf("Moi ban nhap vao so luong phan tu trong mang(0<n<=100): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap vao phan tu thu %d: ",i+1);
        scanf("%d", &arr[i]);
    }

    printf("Phan tu lon hon phan tu dung sau la: ");
    find_leaders(arr, n);

    free(arr);
    return 0;
}