#include <stdio.h>

int main() {
    int arr[10];
    int count_arr[7] = {0, };

    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
        count_arr[arr[i]]++;
    
    }

    for(int i = 1; i <= 6; i++){
        printf("%d - %d\n", i, count_arr[i]);
    }

    return 0;
}