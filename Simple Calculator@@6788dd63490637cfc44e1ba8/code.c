#include<stdio.h>
void calc(a,b,c){
    int d;
    switch(c){
        case '+': d=a+b; break;
        case '-': d=a-b; break;
        case '*': d=a*b; break;
        case '/': d=a/b; break;
        default: printf("dhang se daal");
    }
    printf("%d",d);
}
int main(){
    int a,b;
    char=c[10];
    scanf("%d %d %s",a,b,c);
    calc(a,b,c);
    return 0;

}