#include <stdio.h>

int main(){
    int n, m;
    int arr1[20][20];
    int arr2[20][20];
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &arr2[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m-1; j++){
            printf("%d ", arr1[i][j]+arr2[i][j]);
        }
        printf("%d\n", arr1[i][m-1]+arr2[i][m-1]);
    }
}