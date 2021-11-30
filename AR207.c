#include <stdio.h>
#include <string.h>

struct n{
    int score;
    char name[21];
}sort[21];

int main(){
    int n;
    char student[21];
    int num[21];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s%d", sort[i].name, &sort[i].score);
    }

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(sort[j].score < sort[j+1].score){
                int temp_num = sort[j].score;
                sort[j].score = sort[j+1].score;
                sort[j+1].score = temp_num;

                char temp_name[21];
                strcpy(temp_name, sort[j].name);
                strcpy(sort[j].name, sort[j+1].name);
                strcpy(sort[j+1].name, temp_name);
            }
            else if(sort[j].score == sort[j+1].score){
                if(strcmp(sort[j].name, sort[j+1].name) > 0){
                    int temp_num = sort[j].score;
                    sort[j].score = sort[j+1].score;
                    sort[j+1].score = temp_num;

                    char temp_name[21];
                    strcpy(temp_name, sort[j].name);
                    strcpy(sort[j].name, sort[j+1].name);
                    strcpy(sort[j+1].name, temp_name);
                }
            }
        }
    }
    for(int i = 0; i < n; i++)
        printf("%d %s %d\n", i+1, sort[i].name, sort[i].score);
}