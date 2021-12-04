#include <stdio.h>

struct sum{
    float c;
    float e;
    float m;
}score[128];

int main(){
    int n;
    float sum_c = 0;
    float sum_e = 0;
    float sum_m = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%f%f%f", &score[i].c, &score[i].e, &score[i].m);
        sum_c += score[i].c;
        sum_e += score[i].e;
        sum_m += score[i].m;
    }
    printf("%.1f %.1f %.1f %.1f\n", ((sum_c+sum_e+sum_m)/(3*n)), (sum_c/n), (sum_e/n), (sum_m/n));
}