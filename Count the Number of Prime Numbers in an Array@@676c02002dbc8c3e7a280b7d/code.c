#include<stdio.h>
int checkprime(int n,int count){
    for(int i=2;i<n;i++){
        if(n%i==0){
            continue;
        }
        else{
            if(i==n-1){
                count+=1;
            }
        }
    }return count;
}
int main(){
    int n;
    int ct=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        ct+=checkprime(a[i],0);
    }
    printf("%d",ct);
}