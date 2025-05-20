#include <stdio.h>

int main() {
    int a[100][100], m = 0, n = 0;
    int chon, i, j, tong, tich, max, dongMax;

    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap kich co va gia tri\n");
        printf("2. In theo ma tran\n");
        printf("3. In so le va tinh tong\n");
        printf("4. In duong bien va tinh tich\n");
        printf("5. In duong cheo chinh\n");
        printf("6. In duong cheo phu\n");
        printf("7. Dong co tong lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &chon);

        if (chon == 1) {
            printf("Nhap so dong: ");
            scanf("%d", &m);
            printf("Nhap so cot: ");
            scanf("%d", &n);
            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
                    printf("a[%d][%d] = ", i, j);
                    scanf("%d", &a[i][j]);
                }
            }
        }

        else if (chon == 2) {
            printf("Ma tran:\n");
            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
                    printf("%d\t", a[i][j]);
                }
                printf("\n");
            }
        }

        else if (chon == 3) {
            tong = 0;
            printf("Cac so le: ");
            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
                    if (a[i][j] % 2 != 0) {
                        printf("%d ", a[i][j]);
                        tong += a[i][j];
                    }
                }
            }
            printf("\nTong le: %d\n", tong);
        }

        else if (chon == 4) {
            tich = 1;
            printf("Cac phan tu duong bien: ");
            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
                    if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                        printf("%d ", a[i][j]);
                        tich *= a[i][j];
                    }
                }
            }
            printf("\nTich duong bien: %d\n", tich);
        }

        else if (chon == 5) {
            printf("Duong cheo chinh: ");
            for (i = 0; i < m && i < n; i++) {
                printf("%d ", a[i][i]);
            }
            printf("\n");
        }

        else if (chon == 6) {
            printf("Duong cheo phu: ");
            for (i = 0; i < m && i < n; i++) {
                printf("%d ", a[i][n - 1 - i]);
            }
            printf("\n");
        }

        else if (chon == 7) {
            max = -1000000;
            for (i = 0; i < m; i++) {
                tong = 0;
                for (j = 0; j < n; j++) {
                    tong += a[i][j];
                }
                if (tong > max) {
                    max = tong;
                    dongMax = i;
                }
            }
            printf("Dong co tong lon nhat: ");
            for (j = 0; j < n; j++) {
                printf("%d ", a[dongMax][j]);
            }
            printf("\nTong = %d\n", max);
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

