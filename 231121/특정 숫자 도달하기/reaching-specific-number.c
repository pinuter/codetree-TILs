#include <stdio.h>

int main() {
    int arr[10];
    int sum = 0;
    int cnt = 0;

    // 10개의 정수 입력 받기
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);

        // 250 이상의 정수가 나오면 이전까지의 합계와 평균 계산 후 종료
        if (arr[i] >= 250) {
            cnt = i; // 250 이상의 정수 이전까지의 개수 저장
            break;
        }
    }

    // 250 이상의 정수가 없다면 모든 정수에 대해 합계와 평균 계산
    if (cnt == 0) {
        cnt = 10;
    }

    for (int j = 0; j < cnt; j++) {
        sum += arr[j];
    }

    double average = (double)sum / cnt;

    printf("%d ", sum);
    printf("%.1lf\n", average);

    return 0;
}