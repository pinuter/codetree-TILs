#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(b >= a){
        for(int i = b; i >= a; i--){
            printf("%d ", i);
        }
    }
    else{
        for(int i = a; i >= b; i--){
            printf("%d ", i);
        }
    }
    return 0;
}