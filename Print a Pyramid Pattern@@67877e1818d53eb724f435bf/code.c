#include<stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            printf(" ");
        }
        for(int k=n;k<=i+2;k++){
            printf("*");
        }
        for(int f=n;f<i+2;f++){
            printf("*");
        }
        printf("\n");
    }
}