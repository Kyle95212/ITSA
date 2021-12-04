#include <stdio.h>
#include <string.h>

int main(){
    int n;
    int flag = 0;
    int cnt = 0;
    char line[31];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s", line);
        int len = strlen(line);
        if(len != 4){
            printf("Failure Input\n");
            break;
        }
        for(int j = 0; j < len; j++){
            for(int k = 0; k < len; k++){
                if(line[j] == line[k]){
                    cnt++;
                }
            }
            if(cnt == 2){
                flag++;
            }
            cnt = 0;
        }
        if(flag == 2)
            printf("Yes\n");
        else
            printf("No\n");
        flag = 0;
    }
}