#include<stdio.h>
int checkprime(int n){
    if(n<2){
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    int count=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(checkprime(a[i])==1){
            count++;
        }
  
    }
          printf("%d",count);

}