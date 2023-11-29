#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    int idx = -1;
    scanf("%d", &n);

    if (n <= 0) {
        printf("유효하지 않은 입력입니다. n에는 양의 정수를 입력하세요.\n");
        return 1;
    }

    int arr[n];
    int min = INT_MAX;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (min > arr[i]) {
            min = arr[i];
            idx = i;
        }
    }

    if (idx == -1) {
        printf("배열에 유효한 원소가 없습니다.\n");
    } else {
        printf("%d %d\n", min, idx);
    }

    return 0;
}