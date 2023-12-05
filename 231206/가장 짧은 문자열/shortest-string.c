#include <stdio.h>

int main() {
    char arr[20];
    char arr_2[20];
    char arr_3[20];
    scanf("%s %s %s", arr, arr_2, arr_3);

    int len = 0, len_2 = 0, len_3 = 0;

    for (int i = 0; i < 20; i++) {
        if (arr[i] == '\0') {
            len = i;
            break;
        }
    }
    for (int i = 0; i < 20; i++) {
        if (arr_2[i] == '\0') {
            len_2 = i;
            break;
        }
    }
    for (int i = 0; i < 20; i++) {
        if (arr_3[i] == '\0') {
            len_3 = i;
            break;
        }
    }

    if (len_2 > len && len_2 > len_3) {
        printf("%d", len_2 - len);
    } else if (len_3 > len && len_3 > len_2) {
        printf("%d", len_3 - len);
    } else if (len > len_2 && len > len_3) {
        printf("%d", len - len_2);
    } else if(len > len_3 && len_2 > len){
        printf("%d", len_2 - len_3);
    }
    else{
        printf("%d", len - len_3);
    }

    return 0;
}