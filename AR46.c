#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char *getword(char *line,char *word){
    char *ptr;
    char *qtr;
    ptr=line;
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
    double arr[11];
    char line[128];
    char num[21];
    char *ptr;
    int cnt = 0;
    double sum = 0;
    while(fgets(line, 128, stdin) != NULL){
        ptr = line;
        while((ptr = getword(ptr, num)) != NULL){
            arr[cnt] = atof(num);    
            sum += arr[cnt]*arr[cnt];
            cnt++;
        }
    }
    printf("%.6lf\n", sum);
}