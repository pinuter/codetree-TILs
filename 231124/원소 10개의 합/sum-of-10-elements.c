#include <stdio.h>

int main(){
    int arr[10], sum = 0, val;
    for(int i = 0; i < 10; i++){
        scanf("%d", &val);
        sum += val;
    }
    printf("%d", sum);
}