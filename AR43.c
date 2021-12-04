#include <stdio.h>

int recur(int m, int n){
    if(n == 0)  return 1;
    else return recur(m, n-1)*m;
}

int main(){
    int m, n;
    while(scanf("%d%d", &m, &n) != EOF){
        printf("%d\n", recur(m, n));
    }
}