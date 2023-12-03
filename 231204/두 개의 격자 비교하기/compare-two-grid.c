#include <stdio.h>

int main() {
    int n, m;
    int temp[101][101];
    int a[5][5];
    int b[5][5];
    int c[5][5] = {0};

    scanf("%d %d", &n, &m);

    // 입력 받는 부분 수정
    for (int i = 0; i < n + m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &temp[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            a[i][j] = temp[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            b[i][j] = temp[i + 4][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[i][j] != b[i][j]) {
                c[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}