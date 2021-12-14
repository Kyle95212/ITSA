#include <stdio.h>

long long int power(int i){
    if(i == 0)
        return 1;
    else
        return 2*power(i-1);
}

int main(){
    long long int n;
    scanf("%lld", &n);
    if(n > 31)
        printf("Value of more than 31\n");
    else
        printf("%lld\n", power(n));
}