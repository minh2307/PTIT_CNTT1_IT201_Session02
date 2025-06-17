#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int count_elment(int* arr, int size, int number) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == number) {
            count++;
        }
    }
    return count;
}

int main() {
    // a[7] = {1,1,2,3,9,7,2};
    int n,number;
    int* arr = (int *)calloc(100, sizeof(int));
    printf("Moi ban nhap vao so luong phan tu trong mang(0<n<=100): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap vao phan tu thu %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("Nhap vao so nguyen: ");
    scanf("%d", &number);

    printf("So %d co so lan xuat hien la: %d",number, count_elment(arr, n, number));
}