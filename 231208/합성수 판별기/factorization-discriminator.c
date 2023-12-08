#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, v;
    scanf("%d", &n);
    for(v = 2; n/v; v++) {
        if(n/v == 1){
            printf("C");
            break;
        }
        else if(n/v == 0) {
            printf("D");
            break;
        }
    }
    return 0;
}