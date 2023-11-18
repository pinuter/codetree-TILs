#include <stdio.h>

int main() {
    int a, b;

    // 사용자로부터 두 자연수 a와 b 입력 받기

    scanf("%d %d", &a, &b);

    // a부터 b까지의 합 계산
    int sum = 0;
    for (int i = a; i <= b; i++) {
        sum += i;
    }

    // 결과 출력
    printf("%d\n", sum);

    return 0;
}