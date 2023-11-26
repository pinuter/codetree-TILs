#include <stdio.h>

int main() {
    double arr[8];
    double sum = 0;
    double avg = 0;

    for (int i = 0; i < 8; i++) {
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }

    avg = sum / 8;
    printf("%.1lf", avg);

    return 0;
}