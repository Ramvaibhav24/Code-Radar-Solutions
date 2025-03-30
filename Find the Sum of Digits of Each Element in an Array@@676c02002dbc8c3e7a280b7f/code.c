#include<stdio.h>
int count(int n){
    if(n<0){
        n=-1*n;
    }
    int i=0;
    int count=0;
    while(n>0){
        count+=n%10;
        n=n/10;
    }
    printf("%d ",count);
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++){
        count(a[j]);
    }
}