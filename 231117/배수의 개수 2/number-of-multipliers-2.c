#include <stdio.h>

int main() {
    int a, cnt = 0;
    for(int i = 1; i <= 10; i++){

        scanf("%d", &a);
        if(i % 2 == 1){
            cnt++;
        }
    }
    printf("%d", cnt);

    return 0;
}