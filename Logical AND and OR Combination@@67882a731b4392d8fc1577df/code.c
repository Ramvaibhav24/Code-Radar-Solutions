#include <stdio.h>
int main(){
    int a;
    int b;
    scanf("%d %d",&a,&b);
    if(a||b){
        if(b<0){
            printf("True");
        }
        else{
            printf("False");
        }
    }
    else{
        printf("False");
    }
    return 0;
}