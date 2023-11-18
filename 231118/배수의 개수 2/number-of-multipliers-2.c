#include <stdio.h>

int main() {
    int n, cnt = 0;
    scanf("%d", &n);
    for(int i = n; i <= n; i++){
        if(i % 2 == 1){
            printf("%d ", i);
            cnt++;
        }
    }
    return 0;
}