#include <stdio.h>

int main(){
    int year;
    scanf("%d", &year);
    if(year%12 == 0)
        printf(",monky\n");
    else if(year%12 == 1)
        printf("rooster\n");
    else if(year%12 == 2)
        printf("dog\n");
    else if(year%12 == 3)
        printf("pig\n");
    else if(year%12 == 4)
        printf("rat\n");
    else if(year%12 == 5)
        printf("ox\n");
    else if(year%12 == 6)
        printf("tiger\n");
    else if(year%12 == 7)
        printf("rabbit\n");
    else if(year%12 == 8)
        printf("dragon\n");
    else if(year%12 == 9)
        printf("snake\n");
    else if(year%12 == 10)
        printf("horse\n");
    else
        printf("sheep\n");
}