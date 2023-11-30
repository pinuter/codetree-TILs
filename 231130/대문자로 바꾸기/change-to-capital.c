#include <stdio.h>
#include <ctype.h>

int main() {
    char arr[5][3];

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 3; j++) {
            // 문자를 입력받을 때, 공백과 개행 문자는 무시합니다.
            scanf(" %c", &arr[i][j]);
            
            // 소문자로 변환하여 출력합니다.
            printf("%c ", toupper(arr[i][j]));
        }
        printf("\n");
    }

    return 0;
}