#include <stdio.h>

int main() {
    int arr[10];
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    int a, b, c;
    a = arr[4];
    b = arr[9];
    c = arr[3];
    printf("%d", a+b+c);
    return 0;
}