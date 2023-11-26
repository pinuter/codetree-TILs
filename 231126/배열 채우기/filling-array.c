#include <stdio.h>

int main() {
    int arr[10];
    scanf("%d", &arr[10]);
    for(int i = 10; i > 0; i--){
        printf("%d", i);
        if(i == 0){
            break;
        }
    }
    return 0;
}