#include <stdio.h>
#include <stdlib.h>

void reverse_array(int *arr, int n) {
    int start = 0;
    int end = n-1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printf("Mang sau khi dao nguoc la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    // int arr[7] = {1,1,2,3,9,7,2};
    int n;
    int* arr = (int *)calloc(100, sizeof(int));
    printf("Moi ban nhap vao so luong phan tu trong mang(0<n<=100): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap vao phan tu thu %d: ",i+1);
        scanf("%d", &arr[i]);
    }

    reverse_array(arr, n);

    free(arr);
}