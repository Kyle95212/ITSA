#include <stdio.h>

int main(){
    int n;
    int year[128];
    int tmp;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &year[i]);
        if(year[i] < 0)
            tmp = year[i]+101;
        else
            tmp = year[i]+100;
        if(tmp%12 == 0)
            printf("%d sheep\n", year[i]);
        else if(tmp%12 == 1)
            printf("%d monkey\n", year[i]);
        else if(tmp%12 == 2)
            printf("%d rooster\n", year[i]);
        else if(tmp%12 == 3)
            printf("%d dog\n", year[i]);
        else if(tmp%12 == 4)
            printf("%d pig\n", year[i]);
        else if(tmp%12 == 5)
            printf("%d rat\n", year[i]);
        else if(tmp%12 == 6)
            printf("%d ox\n", year[i]);
        else if(tmp%12 == 7)
            printf("%d tiger\n", year[i]);
        else if(tmp%12 == 8)
            printf("%d rabbit\n", year[i]);
        else if(tmp%12 == 9)
            printf("%d dragon\n", year[i]);
        else if(tmp%12 == 10)
            printf("%d snake\n", year[i]);
        else if(tmp%12 == 11)
            printf("%d horse\n", year[i]);
    }

}