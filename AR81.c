#include <stdio.h>
#include <string.h>

int main(){
    int num[10];
    char ch;
    for(int i = 0; i < 9; i++){
        scanf("%d%c", &num[i], &ch);
    }
    for(int i = 0; i < 9-1; i++){
        for(int j = 0; j < 9-i-1; j++){
            if(num[j] < num[j+1]){
                int tmp = num[j];
                num[j] = num[j+1];
                num[j+1] = tmp;
            }
        }
    }
    printf("%d\n", num[0]+num[1]+num[2]);
}