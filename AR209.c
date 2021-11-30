#include <stdio.h>
#include <string.h>

struct soldier{
    char name[21];
    int brill;
    int hard;
}t[21];

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s%d%d", t[i].name, &t[i].brill, &t[i].hard);
        if(t[i].brill == 1 && t[i].hard == 3)
            printf("%s Staff\n", t[i].name);
        else if(t[i].brill == 1 && t[i].hard == 4)
            printf("%s General\n", t[i].name);
        else if(t[i].brill == 2 && t[i].hard == 3)
            printf("%s execute by shooting\n", t[i].name);
        else
            printf("%s Soldier\n", t[i].name);
    }
}