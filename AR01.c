#include <stdio.h>

int main(){
    int arr[101];
    int cnt = 0;

    for(cnt = 0; cnt < 101; cnt++){
        int check = scanf("%d", &arr[cnt]);
        if(check == EOF)
            break;
    }

    for(int i = cnt-1; i > 0; i--)
        printf("%d ", arr[i]);
    printf("%d\n", arr[0]);
}