#include<stdio.h>
int count(int n){
    int arr[10],i=0;
    int count=0;
    while(n>0){
        arr[i++]=n%10;
        count+=arr[i++];
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