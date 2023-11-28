#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] == 2) {
            cnt++;
            if (cnt == 3) {
                printf("%d ", i + 1); // 세 번째로 등장한 2의 위치 출력
                cnt = 0; // 인덱스를 출력한 후 카운트 초기화
            }
        } else {
            cnt = 0; // 2가 아닌 경우 카운트 초기화
        }
    }

    return 0;
}