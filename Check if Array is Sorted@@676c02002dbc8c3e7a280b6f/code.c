#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
       int a;
       scanf("%d",&a);
       arr[i]==a;
    }
    for(int i=0;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(arr[i]<=arr[j]){
                if(i==n){
                    printf("sorted");
                    return 0;
                }
                continue;
            }
            else{
                if(i==n){
                    printf("Not Sorted");
                    return 0;
                }
            }
        }
    }
    }