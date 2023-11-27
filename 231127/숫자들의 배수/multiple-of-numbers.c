#include <stdio.h>

int main() {
    int n;
    int cnt = 0;
    scanf("%d", &n);
    int arr[100];
    arr[0] = n;
    for(int i = 1; i <= 10; i++){
        arr[i]=n*(i);
        printf("%d ", arr[i]);
        if(arr[i] % 5 == 0){
            cnt++;
        }
        if(cnt == 2){

            break;
        }
    }
    return 0;
}