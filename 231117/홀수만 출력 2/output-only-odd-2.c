#include <stdio.h>

int main() {
    int b, a;
    scanf("%d %d", &b, &a);
    for(int i = b; i > a - 1; i-= 2){
        if(i % 2 == 1){
        printf("%d ", i);
        }
    }
    return 0;
}