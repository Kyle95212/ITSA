#include <stdio.h>
#include <string.h>

int len(char arr[]){
    int cnt = 0;
    while(arr[cnt] != '\0')
        cnt++;
    return cnt;
}

int main(){
    char word[128];
    while(scanf("%s", word) != EOF){
        int length = len(word);
        int mid = length/2;
        int flag = 0;
        for(int i = 0; i < mid; i++){
            if(word[i] != word[length-i-1]){
                flag = 1;
                break;
            }
            else
                flag = 0;
        }
        if(flag == 1)
            printf("NO\n");
        else
            printf("YES\n");
    }
}