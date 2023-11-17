#include <stdio.h>

int main() {
    char c;
    int n;
    scanf("%c %d", &c, &n);
    if(c == 'A'){
        for(int i = 1; i <= n; i++){
            printf("%d ", i);
        }
    }
    else if(c == 'D'){
        for(int i = 1; i <= n; n--){
            printf("%d ", n);
        }
    }
    return 0;
}