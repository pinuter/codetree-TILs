#include <stdio.h>
#include <string.h>

int main() {
    char arr[100];
    char array[100];
    scanf("%s %s", arr, array);
    int len;
    int len_2;

    // 첫 번째 문자열 (arr)의 길이 찾기
    for (int i = 0; i < 100; i++) {
        if (arr[i] == '\0') {
            len = i;
            break;
        }
    }

    // 두 번째 문자열 (array)의 길이 찾기
    for (int i = 0; i < 100; i++) {
        if (array[i] == '\0') {
            len_2 = i;
            break;
        }
    }

    // 두 문자열의 길이의 합 출력
    printf("%d", len + len_2);
    return 0;
}