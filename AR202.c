#include <stdio.h>
#include <string.h>

int main(){
    char element[20];
    char g_o[20];
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s %s", element, g_o);
        if(strcmp(g_o, "Generating") == 0){
            if(strcmp(element, "Metal") == 0){
                printf("Water\n");
            }
            else if(strcmp(element, "Wood") == 0){
                printf("Fire\n");
            }
            else if(strcmp(element, "Water") == 0){
                printf("Wood\n");
            }
            else if(strcmp(element, "Fire") == 0){
                printf("Earth\n");
            }
            else if(strcmp(element, "Earth") == 0){
                printf("Metal\n");
            }
        }
        else if(strcmp(g_o, "Overcoming") == 0){
            if(strcmp(element, "Metal") == 0){
                printf("Wood\n");
            }
            else if(strcmp(element, "Wood") == 0){
                printf("Earth\n");
            }
            else if(strcmp(element, "Water") == 0){
                printf("Fire\n");
            }
            else if(strcmp(element, "Fire") == 0){
                printf("Metal\n");
            }
            else if(strcmp(element, "Earth") == 0){
                printf("Water\n");
            }
        }
    }
}