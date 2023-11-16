#include <stdio.h>

int main() {
    int n;
    int i = 1;
    scanf("%d", &n);
    while(i < n + 1){
        printf("*\n");
        i++;
    }
    return 0;
}