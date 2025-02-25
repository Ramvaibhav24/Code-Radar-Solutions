#include<stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int j=1;
    for(int i=1;i<=n;i++){
        for( ;j<=n-i;j++){
            printf(" ",j);
        }
        for(int k=1;k<=(2*i)-1;k++){
            printf("*");
        }
        for(int l=1;l<=n-j;l++){
            printf(" ");
        }
        for(int m=n;m<=(2*i)-1;m--){
            printf("*");
        }
        printf("\n");
    }
}