#include <stdio.h>
int main(){
    int a;
    int b;
    scanf("%d %d",&a,&b);
    if(a||b){
        if(b<0){
            print("True");
        }
        else{
            print("False");
        }
    }
    else{
        print("False");
    }
    return 0;
}