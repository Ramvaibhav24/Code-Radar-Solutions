#include<stdio.h>
int main(void){
    int a;
    int b;
    scanf("%d %d",&a,&b);
    if(a==b*b){
        printf("Yes");
    }
    else{
        printf("No");
    }
}