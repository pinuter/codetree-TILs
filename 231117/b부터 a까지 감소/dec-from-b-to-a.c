#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i = b; i > a - 1; i--){
        printf("%d ", i);
    }
    return 0;
}