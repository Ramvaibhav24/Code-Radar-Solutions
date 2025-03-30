#include<stdio.h>
void reverse(int a[],int start,int end){
    while(start<end){
        int temp;
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
}
int rotate(int arr[],int n.int k){
    k=k%n;
    if(k==0){
        return 0;
    }
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int key;
    scanf("%d",&key);
    rotate(a,n,key);
    for(int j=0;j<n;j++){
        printf("%d ",a[j]);
    }
}