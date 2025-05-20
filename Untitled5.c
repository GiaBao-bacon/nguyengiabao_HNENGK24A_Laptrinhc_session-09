#include <stdio.h>

int main() {
    int a[100], n = 0;
    int chon, i, x, pos, dem, tong;
    
    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu va gia tri\n");
        printf("2. In ra cac phan tu\n");
        printf("3. In phan tu chan va tinh tong\n");
        printf("4. Tim lon nhat va nho nhat\n");
        printf("5. In so nguyen to va tinh tong\n");
        printf("6. Dem so x xuat hien\n");
        printf("7. Them phan tu vao vi tri\n");
        printf("8. Thoat\n");
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
            printf("Cac phan tu: ");
            for (i = 0; i < n; i++) {
                printf("%d ", a[i]);
            }
            printf("\n");
        }

        else if (chon == 3) {
            tong = 0;
            printf("Cac so chan: ");
            for (i = 0; i < n; i++) {
                if (a[i] % 2 == 0) {
                    printf("%d ", a[i]);
                    tong += a[i];
                }
            }
            printf("\nTong cac so chan: %d\n", tong);
        }

        else if (chon == 4) {
            if (n == 0) {
                printf("Mang rong\n");
                continue;
            }
            int max = a[0], min = a[0];
            for (i = 1; i < n; i++) {
                if (a[i] > max) max = a[i];
                if (a[i] < min) min = a[i];
            }
            printf("Lon nhat: %d, Nho nhat: %d\n", max, min);
        }

        else if (chon == 5) {
            tong = 0;
            printf("So nguyen to: ");
            for (i = 0; i < n; i++) {
                int j, laNT = 1;
                if (a[i] < 2) laNT = 0;
                for (j = 2; j * j <= a[i]; j++) {
                    if (a[i] % j == 0) {
                        laNT = 0;
                        break;
                    }
                }
                if (laNT) {
                    printf("%d ", a[i]);
                    tong += a[i];
                }
            }
            printf("\nTong so nguyen to: %d\n", tong);
        }

        else if (chon == 6) {
            printf("Nhap so can dem: ");
            scanf("%d", &x);
            dem = 0;
            for (i = 0; i < n; i++) {
                if (a[i] == x) dem++;
            }
            printf("So %d xuat hien %d lan\n", x, dem);
        }

        else if (chon == 7) {
            if (n >= 100) {
                printf("Mang day\n");
                continue;
            }
            printf("Nhap vi tri can chen (0-%d): ", n);
            scanf("%d", &pos);
            if (pos < 0 || pos > n) {
                printf("Vi tri khong hop le\n");
                continue;
            }
            printf("Nhap gia tri: ");
            scanf("%d", &x);
            for (i = n; i > pos; i--) {
                a[i] = a[i - 1];
            }
            a[pos] = x;
            n++;
        }

        else if (chon == 8) {
            break;
        }

        else {
            printf("Lua chon khong hop le\n");
        }
    }

    return 0;
}

