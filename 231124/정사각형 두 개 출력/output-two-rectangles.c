#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for(int k = 1; k <= n; k++){
        for(int l = 1; l <= n; l++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}