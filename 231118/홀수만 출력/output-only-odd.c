#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i+=a){
        if(i % 2 == 1){
            printf("%d ", i);
        }
    }
    return 0;
}