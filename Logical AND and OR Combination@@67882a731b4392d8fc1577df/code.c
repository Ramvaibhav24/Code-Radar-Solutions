#include <stdio.h>
int main(){
    int a;
    int b;
    scanf("%d %d",&a,&b);
    if(a||b){
        if(a<=0){
            printf("False");
        }
        else {if(b<0){
            printf("True");}
            else{
                printf("False");
            }
        }    
    }
    else{
        printf("True");
    }
    return 0;
}