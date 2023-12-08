#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // 2부터 n까지의 수로 나누어보며 약수를 확인
    int isComposite = 0; // 합성수 여부를 나타내는 플래그

    for (int v = 2; v <= n / 2; v++) {
        if (n % v == 0) {
            isComposite = 1; // 약수를 찾았으면 합성수로 플래그 설정
            break;
        }
    }

    // 합성수인지 여부에 따라 출력
    if (isComposite) {
        printf("C"); // 합성수일 경우
    } else {
        printf("N"); // 합성수가 아닐 경우
    }

    return 0;
}