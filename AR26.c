#include <stdio.h>

void print(int arr[], int cnt){
    for(int i = 0; i < cnt-1; i++)
        printf("%d,", arr[i]);
    printf("%d\n", arr[cnt-1]);
}

void selection(int arr[], int cnt){
    int cur_num = -1;
    for(int i = 0; i < cnt-1; i++){
        int flag = 0;
        cur_num = arr[i];
        for(int j = i; j < cnt; j++){
            if(arr[j] > cur_num){
                cur_num = arr[j];
                flag = 1;
            }
        }
        if(flag == 1){
            for(int j = i; j < cnt; j++){
                if(cur_num == arr[j]){
                    int tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                } 
            }
            print(arr, cnt);
        }
    }
}

int main(){
    int arr[128];
    int i = 0;
    while(scanf("%d", &arr[i]) != EOF)
        i++;
    print(arr, i);
    selection(arr, i);
}