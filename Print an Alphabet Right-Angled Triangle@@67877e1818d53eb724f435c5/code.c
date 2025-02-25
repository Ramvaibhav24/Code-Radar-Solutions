#include<stdio.h>

int main(void){
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%c ", 'A' + j - 1); // Print letters starting from 'A'
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
