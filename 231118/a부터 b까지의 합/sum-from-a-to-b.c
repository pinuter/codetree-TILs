#include <stdio.h>

int main() {
    int sum_val = 0;
    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= a; i++) {
        sum_val += i * b;
    }

    printf("%d\n", sum_val);
    return 0;
}