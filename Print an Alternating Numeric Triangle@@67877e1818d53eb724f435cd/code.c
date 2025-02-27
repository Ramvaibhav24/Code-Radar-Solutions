#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <=  i-1; j++) {
            if(i==1&&j==0){
                printf("1");
                break;
            }
            printf("%d ",j);
        }
        printf("\n");
    }
}    