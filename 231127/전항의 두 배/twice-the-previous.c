#include <stdio.h>

int main() {
    int arr[10];

    // 처음 두 항을 입력받음
    for (int i = 0; i < 2; i++) {
        scanf("%d", &arr[i]);
    }

    // 세 번째 항부터 10번째 항까지 계산하여 배열에 저장
    for (int i = 2; i < 10; i++) {
        arr[i] = arr[i - 1] + 2 * arr[i - 2];
    }

    // 수열 출력
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}