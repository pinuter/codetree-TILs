#include <stdio.h>

int main() {
    int arr[10];
    for(int i = 1; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 1; i < 10; i++){
        if(i % 3 == 0){
            printf("%d ", arr[i - 1]);
            break;
        }
    }
    return 0;
}