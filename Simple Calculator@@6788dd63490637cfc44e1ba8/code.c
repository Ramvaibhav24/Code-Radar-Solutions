#include<stdio.h>
void calc(int a,int b, char c){
    int d;
    switch(c){
        case '+': d=a+b; break;
        case '-': d=a-b; break;
        case '*': d=a*b; break;
        case '/':  
                if(b!=0){
                    d=a/b;
                }
                else{
                    printf("error");
                }
                break;
        default: printf("question padh");break;
    }
    printf("%d",d);
    return
}
int main(){
    int a,b;
    char=c[10];
    scanf("%d %d %s",&a,&b,&c);
    calc(a,b,c);
    return 0;

}