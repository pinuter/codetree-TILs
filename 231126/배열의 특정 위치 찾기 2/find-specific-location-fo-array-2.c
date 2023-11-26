#include <stdio.h>

int main() {
    int arr[10];
    int sum = 0;
    int val = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 10; i++){
        if(i % 2 == 0){
            sum += arr[i];
        }
        else{
            val += arr[i];
        }
    }
    if(sum > val){
        printf("%d", sum - val);
    }
    else{
        printf("%d", val - sum);
    }
    return 0;
}