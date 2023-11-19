#include <stdio.h>

int main() {
    int n;
    char c;
    scanf("%c %d", &c, &n);
    if(c == 'A'){
    for(int i = 1; i <= n; i++){
        printf("%d ", i);
    }}
    else if(c == 'D'){
        for(int j = n; j >= 1; j--){
            printf("%d ", j);
        }
    }
    return 0;
}