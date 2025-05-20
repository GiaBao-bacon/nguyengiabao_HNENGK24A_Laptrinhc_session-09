#include <stdio.h>

int main() {
    int a[100];
    int n = 0;
    int chon, i, x, pos;

    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &chon);

        if (chon == 1) {
            printf("Nhap so luong phan tu: ");
            scanf("%d", &n);
            for (i = 0; i < n; i++) {
                printf("a[%d] = ", i);
                scanf("%d", &a[i]);
            }
        }

        else if (chon == 2) {
            printf("Mang hien tai: ");
            for (i = 0; i < n; i++) {
                printf("%d ", a[i]);
            }
            printf("\n");
        }

        else if (chon == 3) {
            if (n >= 100) {
                printf("Mang day, khong the them\n");
                continue;
            }
            printf("Nhap gia tri can them: ");
            scanf("%d", &x);
            printf("Nhap vi tri chen (0-%d): ", n);
            scanf("%d", &pos);
            if (pos < 0 || pos > n) {
                printf("Vi tri khong hop le.\n");
                continue;
            }
            for (i = n; i > pos; i--) {
                a[i] = a[i - 1];
            }
            a[pos] = x;
            n++;
        }

        else if (chon == 4) {
            printf("Nhap vi tri muon sua (0-%d): ", n - 1);
            scanf("%d", &pos);
            if (pos < 0 || pos >= n) {
                printf("Vi tri khong hop le.\n");
                continue;
            }
            printf("Nhap gia tri moi: ");
            scanf("%d", &x);
            a[pos] = x;
        }

        else if (chon == 5) {
            printf("Nhap vi tri muon xoa (0-%d): ", n - 1);
            scanf("%d", &pos);
            if (pos < 0 || pos >= n) {
                printf("Vi tri khong hop le.\n");
                continue;
            }
            for (i = pos; i < n - 1; i++) {
                a[i] = a[i + 1];
            }
            n--;
        }

        else if (chon == 6) {
            break;
        }

        else {
            printf("Lua chon khong hop le.\n");
        }
    }

    return 0;
}

