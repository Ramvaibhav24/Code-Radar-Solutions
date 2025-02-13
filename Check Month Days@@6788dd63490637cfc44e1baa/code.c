#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>12){
        printf("Invalid month");
    }
    if(a=1||3||5||7||8||10||12){
        printf("31");
    }
    else{
        if(a=2){
            printf("28");
        }
        else{
            printf("30");
        }
    }
    return 0;
}