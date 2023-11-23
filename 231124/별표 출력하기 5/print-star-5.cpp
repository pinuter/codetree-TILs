#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i=i+1) {
        for(int j=1;j<=n+1-i;j=j+1) {
            for(int k=1;k<=n+1-i;k=k+1) {
                printf("*");
            }
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}