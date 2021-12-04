#include <stdio.h>
#include <math.h>

int triple(int x){
    if(x == 0) return 0;
    return x*x*x;
}

int main(){
    int arr[6];
    for(int i = 0; i < 6; i++)
        scanf("%d", &arr[i]);
    
    int total = 0;
    for(int i = 0; i < 6; i++)
        total += triple(arr[i]);
    printf("%d\n", total);
}