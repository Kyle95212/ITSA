#include <stdio.h>

int main(){
    int num;
    int change[4];
    scanf("%d", &num);
    for(int i = 3; i >= 0; i--){
        change[i] = num%10;
        num /= 10;
        change[i] = (change[i]+7)%10;
    }
    int tmp1 = change[0];
    change[0] = change[2];
    change[2] = tmp1;

    int tmp2 = change[1];
    change[1] = change[3];
    change[3] = tmp2;

    for(int i = 0; i < 4; i++)
        printf("%d", change[i]);
    printf("\n");;
}