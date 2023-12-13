#include <stdio.h>
#include <string.h>

int main() {
    char arr[9];
    scanf("%s", &arr);

    for (int i = 0; arr[i] != '\0'; i++) {
        printf("%c\n", arr[i]);
    }
    return 0;
}