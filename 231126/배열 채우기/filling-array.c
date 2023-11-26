#include <stdio.h>

int main() {
    const int maxSize = 10;
    int numbers[maxSize];
    int input, count = 0;



    // 최대 10개의 정수를 입력받음
    for (int i = 0; i < maxSize; i++) {
        scanf("%d", &input);

        // 0이 입력되면 입력 중단
        if (input == 0) {
            break;
        }

        numbers[i] = input;
        count++;
    }

    // 가장 나중에 입력된 정수부터 출력
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }

    return 0;
}