#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int out=1;
    for(int i=1;i<=10;i++){
        out=out*2;
        printf("%d*%d=%d\n",n,i,out);
    }
    return 0;
}