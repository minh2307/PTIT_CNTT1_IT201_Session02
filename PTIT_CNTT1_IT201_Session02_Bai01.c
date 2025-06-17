#include <stdio.h>
#include <stdlib.h>

void max_elment(int* arr, int size){
    int max = arr[0];
    for(int i = 1; i < size; i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }
    printf("So nguyen lon nhat trong mang la: %d\n", max);
}

int main(){
    int* a = (int *)calloc(100, sizeof(int));
    int n;
    printf("Nhap vao so luong phan tu trong mang: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Nhap vao vi tri thu %d cua mang: ", i);
        scanf("%d", &a[i]);
    }

    max_elment(a, n);

    free(a);
    return 0;
}
