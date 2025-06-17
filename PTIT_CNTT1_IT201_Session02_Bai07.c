#include <stdio.h>
#include <stdlib.h>

void  find_pair_sum(int *arr, int n, int target) {
    int flag = 0;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Cap duoc tim thay la: %d + %d = %d\n", arr[i], arr[j], target);
                flag = 1;
                break;
            }
        }
    }
    if (!flag) {
        printf("Khong tim thay cap nao co gia tri bang %d", target);
    }
}



int main() {
    // int arr[7] = {1,1,2,3,9,7,2};
    int n , value;
    int* arr = (int *)calloc(100, sizeof(int));
    printf("Moi ban nhap vao so luong phan tu trong mang(0<n<=100): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap vao phan tu thu %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("Nhap vao so nguyen bat ky:  ");
    scanf("%d", &value);

    find_pair_sum(arr, n, value);
    free(arr);
    return 0;
}
