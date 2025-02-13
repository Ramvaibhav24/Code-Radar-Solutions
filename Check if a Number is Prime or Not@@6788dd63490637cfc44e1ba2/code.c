#include<stdio.h>
int main(void){
    int a;
    scanf("%d",&a);
    int i;
    if(i=2){
        printf("Prime");
        return 0;
    }
    for(i=2;i<a;i++){
        if(a%i==0){
            if(i=a-2){
            printf("Not Prime");
            break;}
            else{
                continue;
            }
        }
        else{
            if(i=a-2){
            printf("Prime");
            break;}
            else{
                continue;
            }
            
        }
    }
}