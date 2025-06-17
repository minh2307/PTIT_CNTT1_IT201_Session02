#include <stdio.h>
#include <stdlib.h>

void update_element(int *arr, int index, int *n, int value)  {
    for (int i = *n; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    (*n)++;

}

void print_array(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
}

int main(){
    // int arr[7] = {1,1,2,3,9,7,2};
    int n = 7, index, value;
    int* arr = (int *)calloc(100, sizeof(int));
    printf("Moi ban nhap vao so luong phan tu trong mang(0<n<=100): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap vao phan tu thu %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("Nhap vao vi tri muon them phan tu: ");
    scanf("%d", &index);

    printf("Nhap vao gia tri muon them vao: ");
    scanf("%d", &value);

    if (index >= n) {
        printf("Vi tri khong hop le");
        return 0;
    }

    update_element(arr, index, &n, value);
    printf("Mang sau khi xoa: ");
    print_array(arr, n);

    free(arr);
}