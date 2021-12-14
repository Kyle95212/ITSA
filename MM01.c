#include <stdio.h>

int main(){
    float u, d, h;
    scanf("%f%f%f", &u, &d, &h);
    float sum = (u+d)*h/2;
    printf("Trapezoid area:%.1f\n", sum);
}