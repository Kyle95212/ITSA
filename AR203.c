#include <stdio.h>

int main(){
    int n;
    int d[10];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &d[i]);
        if(d[i] == 1)
            printf("%d Mercury\n", d[i]);
        else if(d[i] == 2)
            printf("%d Venus\n", d[i]);
        else if(d[i] == 3)
            printf("%d Earth\n", d[i]);
        else if(d[i] == 4)
            printf("%d Mars\n", d[i]);
        else if(d[i] == 5)
            printf("%d Juputer\n", d[i]);
        else if(d[i] == 6)
            printf("%d Saturn\n", d[i]);
        else if(d[i] == 7)
            printf("%d Uranus\n", d[i]);
        else if(d[i] == 8)
            printf("%d Neptunus\n", d[i]);
        else if(d[i] == 9)
            printf("%d Pluto\n", d[i]);
    }
}