#include <stdio.h>

int main(){
    double a;
    scanf("%lf", &a);
    double sum = ((a*a*10)+0.5)/10.0;
    printf("%.1lf\n", sum);
}