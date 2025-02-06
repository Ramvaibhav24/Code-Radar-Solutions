#include <stdio.h>
void main(){
    int a;
    int b;
    int c;
    scanf("%d %d %d",&a,&b,&c);
    float d=float(a+b+c)/3;
    printf("Average: %.2f",d);
}