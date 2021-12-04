#include <stdio.h>

int main(){
    int n, m;  
    char output[128];
    int cnt = 0; 
    scanf("%d%d", &n, &m);
    int divider = n;
    while(divider >= m){
        if(divider%m >= 0 && divider%m <= 9)
            output[cnt] = (char)((divider%m)+48);
        else if(divider%m >= 10)
            output[cnt] = (char)((divider%m)+87);
        divider = divider/m;
        cnt++;
    }
    if(divider >= 0 && divider <= 9)
        output[cnt++] = (char)((divider%m)+48);
    else if(divider >= 10)
        output[cnt++] = (char)((divider%m)+87);
    printf("The base %d representation of %d is ", m, n);
    for(int i = cnt-1; i >= 0; i--)
        printf("%c", output[i]);
    printf(".\n");
}