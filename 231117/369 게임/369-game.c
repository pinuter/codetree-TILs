#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0 || i == 3 || i == 6 || i == 9){
            printf("0 ");
        }
        else{
        printf("%d ", i);}
    }
    return 0;
}