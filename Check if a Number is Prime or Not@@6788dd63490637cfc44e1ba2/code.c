#include<stdio.h>
int main(void){
    int a;
    scanf("%d",&a);
    int i;
    if(a<=1){
        printf("Not Prime");
        return 0;
    }
    for(i=2;i<a;i++){
        if(a%i==0){
            printf("Not Prime");
            break;}
            
        }
        else{
            if(i=a-2){
            printf("Prime");
            }
            else{
                continue;
            }
            
        }
    
}