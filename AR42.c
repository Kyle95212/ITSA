#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *getword(char *str,char *word){
    char *ptr;
    char *qtr;
    ptr=str;
    qtr=word;
    while(isspace(*ptr)) ptr++;
    while(!isspace(*ptr)&&(*ptr)){
        *qtr=*ptr;
        ptr++;
        qtr++;
    }
    *qtr='\0';
    if(strlen(word)==0) return NULL;
    else return ptr;
}

int main(){
    char line[128];
    char word[12];
    char *ptr;
    int num[12];
    char ch;
    int cnt = 0;
    int tmp_cnt = 0;

    while(fgets(line, 128, stdin) != NULL){
        ptr = line;
        while((ptr = getword(ptr, word)) != NULL){
            num[cnt++] = atoi(word);
        }
        for(int i = 0; i < cnt; i++){
            for(int j = 0; j < cnt; j++){
                if(num[i] == num[j]){
                    tmp_cnt++;
                }
            }
            if(tmp_cnt > cnt/2){
                printf("%d\n", num[i]);
                break;
            }
            tmp_cnt = 0;
        }
        if(tmp_cnt == 0){
            printf("NO\n");
        }
        tmp_cnt = 0;
        cnt = 0;
    }

}