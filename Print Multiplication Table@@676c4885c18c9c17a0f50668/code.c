#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int out;
    for(int i=1;i<=10;i++){
        out=i*n;
        printf("%d x %d = %d\n",n,i,out);
    }
    return 0;
}