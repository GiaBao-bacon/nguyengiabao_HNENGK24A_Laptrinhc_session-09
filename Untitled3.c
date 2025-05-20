#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, currentLength, deleteIndex;
    
    printf("Nhap so phan tu muon nhap (toi da %d): ", MAX_SIZE);
    scanf("%d", &n);
    
    if (n < 0 || n > MAX_SIZE) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }
    
    currentLength = n;
    int i; 
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("Nhap vi tri muon xoa (0 den %d): ", currentLength - 1);
    scanf("%d", &deleteIndex);
    
    if (deleteIndex < 0 || deleteIndex >= currentLength) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }
    
    for (i = deleteIndex; i < currentLength - 1; i++) {
        arr[i] = arr[i + 1];
    }
    currentLength--;
    
    printf("Mang sau khi xoa: ");
    for (i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
