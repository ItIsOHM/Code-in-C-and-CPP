#include <stdio.h>
int main() {
    printf("\nRhythm Garg, 2100290120141");
    int r, c;
    printf("\nEnter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c], transArr[c][r];
    int i,j;

    printf("\nEnter matrix elements:\n");
    for (i = 0; i < r; ++i){
        for (j = 0; j < c; ++j) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEntered matrix: \n");
    for (i = 0; i < r; ++i){
        for (j = 0; j < c; ++j) {
            printf("%d\t", a[i][j]);
            if (j == c - 1)
            printf("\n");
        }
    }

    for (i = 0; i < r; ++i){
        for (j = 0; j < c; ++j) {
            transArr[j][i] = a[i][j];
        }
    }

    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < c; ++i){
        for (j = 0; j < r; ++j) {
            printf("%d\t", transArr[i][j]);
            if (j == r - 1)
            printf("\n");
        }
    }
    return 0;
}
