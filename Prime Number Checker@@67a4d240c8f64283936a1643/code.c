#include<stdio.h>
int isPrime(int num){
           if(num==2){
            return 1;
            break;
        }
    for(int i=2;i<num;i++){
 
        if(num%i==0){
            return 0;
            break;
        }
        else if(i==num-1){
            return 1;
            break;
        }
    }
    return 0;
}