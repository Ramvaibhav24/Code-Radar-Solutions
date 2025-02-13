#include<stdio.h>
int main(void){
    int a;
    scanf("%d",&a);
    int i;
    for(i=2;i<a;i++){
        if(a%i==0){
            if(i=a-1){
            printf("Not Prime");
            break;}
            else{
                continue;
            }
        }
        else{
            if(i=a-1){
            printf("Prime");
            break;}
            else{
                continue;
            }
            
        }
    }
}