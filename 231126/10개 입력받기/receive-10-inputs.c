#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[10];
    int sum = 0;
    int cnt = 0;
    double avg = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
        if(arr[i] == 0){
            break;
        }
        sum+=arr[i];
        cnt++;
        if(cnt > 0){
            avg = sum / cnt;
        }
    }
    printf("%d %.1lf", sum, avg);
    return 0;
}