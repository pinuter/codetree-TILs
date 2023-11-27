#include <stdio.h>

int main() {
    int n;

    // 배열 크기 입력
    scanf("%d", &n);

    // 주어진 배열과 새로운 배열 선언
    int arr[n];
    int evenArray[n]; // 최대 n개의 원소가 모두 짝수일 수 있으므로 크기를 n으로 지정

    // 주어진 배열에 값을 입력받음
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 새로운 배열에 짝수만 저장하고 출력
    int j = 0; // 새로운 배열의 인덱스
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenArray[j] = arr[i];
            j++;
        }
    }

    // 새로운 배열의 원소 출력
   
    for (int i = 0; i < j; i++) {
        printf("%d ", evenArray[i]);
    }

    return 0;
}