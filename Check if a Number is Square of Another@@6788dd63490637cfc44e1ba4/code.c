#include<stdio.h>
int main(void){
    int a;
    int b;
    scanf("%d %d",a,b);
    int c;
    c=b*b;
    if(c==a){
        printf("Yes");
    }
    else{
        printf("No");
    }
}