#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char ch;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf(" %c", &ch);
        printf("%c\n", ch+2);
    }
}
