#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int a;
        scanf("%d", &a);
        if(a % 2 == 1 && a % 3 == 0){
            sum+=a;
            
        }
    }
    printf("%d", sum);
    return 0;
}