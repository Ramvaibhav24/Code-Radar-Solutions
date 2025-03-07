#include<stdio.h>
int isPrime(int num){
    for(int i=2;i<num;i++){
        if(num%2==0){
            return 1;
            break;
        }
        else if(i==num-1){
            return 0;
            break;
        }
    }
    return 0;
}
// int main(){
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         int num;
//         scanf("%d",&num);
//         printf("%d\n",isPrime(num));
//     }
//     return 0;
// }