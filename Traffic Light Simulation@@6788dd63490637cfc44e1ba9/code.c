#include<stdio.h>
int main(void){
    char a;
    scanf("%c",&a);
    switch(a){
        case 'R':printf("Stop");break;
        case 'G':printf("Go");break;
        case 'Y':printf("Slow Down");break;
        default: printf("Invalid input");break;
    }
}