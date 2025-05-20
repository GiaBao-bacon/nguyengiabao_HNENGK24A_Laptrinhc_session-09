#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, currentLength, value, addIndex;
    
    printf("Nhap so phan tu muon nhap:", MAX_SIZE);
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
    
    printf("Nhap gia tri muon them: ");
    scanf("%d", &value);
    printf("Nhap vi tri muon them (0 den %d): ", MAX_SIZE - 1);
    scanf("%d", &addIndex);
    
    if (addIndex < 0 || addIndex > MAX_SIZE - 1) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }
    
    if (addIndex >= currentLength) {
        arr[addIndex] = value;
        currentLength = addIndex + 1;
    } else {
        for (i = currentLength; i > addIndex; i--) {
            arr[i] = arr[i - 1];
        }
        arr[addIndex] = value;
        currentLength++;
    }
    
    printf("Mang sau khi them: ");
    for (i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
