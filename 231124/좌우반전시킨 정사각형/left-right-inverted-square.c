#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = n; j > 0; j--){
            printf("%d ", n - j + 1 + i * n);
        }printf("\n");
    }
    return 0;
}