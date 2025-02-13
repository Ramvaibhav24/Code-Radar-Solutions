#include<stdio.h>
void calc(int a,int b, char c){
    int d =0;
    switch(c){
        case '+': d=a+b; break;
        case '-': d=a-b; break;
        case '*': d=a*b; break;
        case '/':  
                if(b!=0){
                    d=a/b;
                    return;
                }
                else{
                    printf("error");
                    return;
                }
        default: printf("question padh");break;
    }
    printf("%d",d);
}
int main(){
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    calc(a,b,c);
    return 0;

}