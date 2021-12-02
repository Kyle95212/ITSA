#include <stdio.h>

int main(){
    int row, col;
    int a[31][31];
    int b[31][31];
    scanf("%d%d", &row, &col);
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &b[i][j]);
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col-1; j++){
            printf("%d ", a[i][j]*b[i][j]);
        }
        printf("%d\n", a[i][col-1]*b[i][col-1]);
    }
}