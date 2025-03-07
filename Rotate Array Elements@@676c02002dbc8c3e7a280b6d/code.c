#include<stdio.h>

void leftRotate(int arr[], int n, int d) {
    d = d % n;
    
    int temp[d];
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
    for (int i = 0; i < n - d; i++) {
        arr[i] = arr[i + d];
    }

    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    int d;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        arr[i]=a;
    }
    for(int j=0;j<n;j++){
        printf("%d\n",arr[j]);
    }
    scanf("%d",d);
    leftRotate(arr, n, d);
    printArray(arr, n);

    return 0;
}

