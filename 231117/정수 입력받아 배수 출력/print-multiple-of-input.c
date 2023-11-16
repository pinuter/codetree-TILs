#include <stdio.h>

int main() {
    int n, a;
    scanf("%d", &n);
    a % n == 0;
    for(int i = n; i <= 5 * n; i += n){
        printf("%d ", i);
    }
    return 0;
}