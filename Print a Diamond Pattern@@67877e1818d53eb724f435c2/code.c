#include<stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=2*n;i++){
        for( int j=1;j<=n-i;j++){
            printf(" ",j);
        }
        for(int k=1;k<=(2*i)-1;k++){
            printf("*");
        }
    }    
    for(int f=n;f<=2n;f++){
        for(int l=n;l<=i;l++){
            printf(" ");
        }
        for(int m=2*n;m<=(2*i)-1;m--){
            printf("*");
        printf(" ");    
        }
        printf("\n");
    }
}