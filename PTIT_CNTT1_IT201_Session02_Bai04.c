#include <stdio.h>
#include <stdlib.h>


int main() {
    // int arr[7] = {1,1,2,3,9,7,2};
    int n,position,value;
    int* arr = (int *)calloc(100, sizeof(int));
    printf("Moi ban nhap vao so luong phan tu trong mang(0<n<=100): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap vao phan tu thu %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("Nhap vao vi tri muon cap nhap: ");
    scanf("%d", &position);
    printf("Nhap vao phan tu muon cap nhap: ");
    scanf("%d", &value);

    arr[position] =  value;

    printf("Mang sau khi cap nhap: ");
    for (int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }

    free(arr);
}
