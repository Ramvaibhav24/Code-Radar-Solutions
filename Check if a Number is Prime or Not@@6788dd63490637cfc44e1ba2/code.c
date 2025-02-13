#include<stdio.h>
int main(void){
    int a;
    scanf("%d",&a);
    int i;
    for(i=2;i<=a;i++){
        if(a%i==0){
            if(i=a){
            printf("Not Prime");
            break;}
        }
        else{
             if(i=a){
            printf("Prime");
            break;}
            
        }
    }
}