#include <stdio.h>

int main() {
    int arr[4][4];
    int val;

    // 배열에 값을 입력받습니다.
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // 각 행의 합을 계산하고 출력합니다.
    for(int i = 0; i < 4; i++) {
        int sum = 0;
        for(int j = 0; j < 4; j++) {
            sum += arr[i][j];
        }
        printf("%d\n", sum);
    }

    return 0;
}