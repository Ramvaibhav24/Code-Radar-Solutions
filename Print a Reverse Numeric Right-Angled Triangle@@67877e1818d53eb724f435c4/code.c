#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n+1; i++) {
        for (int j = 1; j <=n-i+1 ; j++) {
            printf("%d ",j);
        }
        if(i==n+1){
            break;
        }
        printf("\n");
    }
}  