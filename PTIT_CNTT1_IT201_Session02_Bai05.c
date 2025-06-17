#include <stdio.h>
#include <stdlib.h>

void delete_element(int *arr, int index,  int *n){
        for (int i = index; i < *n; i++) {
                arr[i] = arr[i + 1];
        }
        (*n)--;
}

void print_array(int *arr, int n) {
        for (int i = 0; i < n; i++) {
                printf("%d ",arr[i]);
        }
}

int main() {
        // int arr[7] = {1,1,2,3,9,7,2};
        int n, index;
        int* arr = (int *)calloc(100, sizeof(int));
        printf("Moi ban nhap vao so luong phan tu trong mang(0<n<=100): ");
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
                printf("Nhap vao phan tu thu %d: ",i+1);
                scanf("%d", &arr[i]);
        }
        printf("Nhap vao vi tri muon xoa: ");
        scanf("%d", &index);

        if (index >= n) {
                printf("Vi tri khong hop le");
                return 0;
        }


        delete_element(arr, index, &n);
        printf("Mang sau khi xoa: ");
        print_array(arr, n);

        free(arr);

        return 0;
}