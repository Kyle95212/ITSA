#include <stdio.h>

int gcd(int x, int y){
    int tmp = 0;
    if(x < y){
        for(int i = 1; i <= x; i++){
            if(x%i == 0 && y%i == 0){
                tmp = i;
            }
        }
    }
    else{
        for(int i = 1; i <= y; i++){
            if(x%i == 0 && y%i == 0){
                tmp = i;
            }
        }
    }
    return tmp;
}

int lcm(int x, int y){
    return x*y/gcd(x,y);
}

int main(){
    int n;
    int x, y;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d%d", &x, &y);
        printf("%d %d\n", gcd(x,y), lcm(x,y));
    }
}