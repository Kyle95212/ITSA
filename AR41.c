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
    char word[128];
    char *ptr;
    float num[128];
    float sum = 0;
    int cnt = 0;

    while(fgets(line, 128, stdin) != NULL){
        ptr = line;
        while((ptr = getword(ptr, word)) != NULL){
            num[cnt] = atof(word);
            sum += num[cnt];
            cnt++;
        }
        printf("Size: %d\n", cnt);
        printf("Average: %.3f\n", sum/cnt);
        cnt = 0;
        sum = 0;
    }
}