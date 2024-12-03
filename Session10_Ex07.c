#include <stdio.h>

int main() {
    int n, m;
    int i, j, k;

    //nhap so cot va so dong
    printf("Nhap so dong: ");
    scanf("%d", &n);
    printf("Nhap so cot: ");
    scanf("%d", &m);

    int arr[n][m];

    // Nhap cac phan tu cua mang
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Sap xep tung dong tang dan
    for (i = 0; i < n; i++) {
        for (j = 0; j < m - 1; j++) {
            for (k = j + 1; k < m; k++) {
                if (arr[i][j] > arr[i][k]) {
                    int temp = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = temp;
                }
            }
        }
    }

    // In mang sau khi sap xep
    printf("Mang sau khi sap xep tang tung dong :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

