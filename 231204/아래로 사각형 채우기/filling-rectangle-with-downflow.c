#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n][n];
    int num = 1;

    for(int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = num;
                num++;
            }
        }
        else {
            for (int j = 0; j <= n - 1; j++) {
                arr[i][j] = num;
                num++;
            }
        }
    
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++){
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}