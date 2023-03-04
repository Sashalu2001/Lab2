#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    system("chcp 65001");

    double array[3][3];
    for (short i = 0; i < 3; i++) {
        for (short j = 0; j < 3 ; j++) {
            printf("Введите элемент %hd строки %hd столбца :", i+1, j+1);
            scanf(" %lf", &array[i][j]);
        }
    }
    printf("\nВведённая матрица 3x3: \n");
    for (short i = 0; i < 3; i++) {
        for (short j = 0; j < 3 ; j++) {
            printf("%.2lf\t", array[i][j]);
        }
        printf("\n");
    }

    double s = 0;
    for (short i = 0; i < 3; i++) {
        s += array[i][i];
    }
    printf("Сумма элементов главной диагонали : %.2lf\n", s);
    s = 0;
    for (short i = 0; i < 3; i++) {
        s += array[i][2-i];
    }
    printf("Сумма элементов побочной диагонали : %.2lf\n", s);

    printf("\n");
    int arr[2][2];
    for (short i = 0; i < 2; i++) {
        for (short j = 0; j < 2 ; j++) {
            printf("Введите элемент %hd строки %hd столбца :", i+1, j+1);
            scanf(" %d", &arr[i][j]);
        }
    }
    printf("\nВведённая матрица 2x2: \n");
    for (short i = 0; i < 2; i++) {
        for (short j = 0; j < 2 ; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    int rarr[2][2];
    for (short i = 0; i < 2; i++) {
        for (short j = 0; j < 2 ; j++) {
            rarr[i][j] = 0;
            for (short k = 0; k < 2; k++) {
                rarr[i][j] += arr[i][k] * arr[k][j];
            }
        }

    }
    printf("\nКвадрат матрицы 2x2: \n");
    for (short i = 0; i < 2; i++) {
        for (short j = 0; j < 2 ; j++) {
            printf("%d\t", rarr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
