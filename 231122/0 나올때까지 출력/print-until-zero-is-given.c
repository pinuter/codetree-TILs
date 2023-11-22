#include <stdio.h>

int main() {
    int i;
    while(1){
        scanf("%d", &i);
        if(i == 0){
            i--;
            break;
        }
        printf("%d\n", i);

    }
    return 0;
}