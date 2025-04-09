#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=1;j<n;j++){
        for(int k=j+1;k<n;k++){
            if(arr[j]<arr[k]&&arr[j]<arr[j-1]){
                printf("%d",arr[j+1]);
                return 0;
            }
        }
    }


}