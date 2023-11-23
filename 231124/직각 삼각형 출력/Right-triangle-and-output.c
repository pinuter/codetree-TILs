#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int j;
    for(int i = 1; i <= n; i++){
        for(int j = (i * 2) - 1; j > 0; j--){
            printf("*");
        }printf("\n");
    }
    return 0;
}