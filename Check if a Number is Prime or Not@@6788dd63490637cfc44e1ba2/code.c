#include<stdio.h>
int main(void){
    int a;
    int flag = 1;
    scanf("%d",&a);
    int i;
    if(a<=1){
        printf("Not Prime");
        return 0;
    }
    for(i=2;i<a;i++){
        if(a%i==0){
            flag = 0
            break;}
            
        }
    if(flag){
        printf("Prime");

    }else{
        printf("Not Prime");
    } 
            
        
    
}