#include <stdio.h>

int main() {
    char arr_1[20];
    char arr_2[20];
    scanf("%s %s", &arr_1, &arr_2);
    int len = 0, len_2 = 0;
       for (int i = 0; i < 20; i++) {
        if (arr_1[i] == '\0') {
            len = i;
            break;
        }
    }

    // 두 번째 문자열 (array)의 길이 찾기
    for (int i = 0; i < 20; i++) {
        if (arr_2[i] == '\0') {
            len_2 = i;
            break;
        }
    }
    if(len > len_2) {
        printf("%s %d", arr_1, len);
    }
    else if(len_2 > len) {
        printf("%s %d", arr_2, len_2);
    }
    else{
        printf("same");
    }

    return 0;
}