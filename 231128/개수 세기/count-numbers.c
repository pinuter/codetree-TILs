#include <stdio.h>

int main() {
    int cnt = 0;
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if(arr[i] == m){
            cnt++;
        }
    }

    printf("%d", cnt);
    return 0;
}