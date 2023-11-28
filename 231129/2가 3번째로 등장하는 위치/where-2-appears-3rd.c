#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int idx = -1;
    int cnt = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] == 2) {
            cnt++;

            if(cnt == 3) {
                idx = i;
                printf("%d ", idx + 1);

                // cnt를 초기화하지 않고 반복문을 빠져나감
                break;
            }
        }
    }

    if(idx == -1) {
        printf("None");
    }

    return 0;
}