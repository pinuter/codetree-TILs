#include <stdio.h>

int main() {
    int cnt;
    for(int i = 1; i <= 10; i++){
        if(i % 2 == 1){
            cnt++;
        }
    }
    printf("%d", cnt);

    return 0;
}