#include <stdio.h>

int main() {
    // 변수 선언 및 입력
    int a, b;
    scanf("%d %d", &a, &b);
    
    int sum = 0;
    
    // Case 1. b가 더 큰 경우 
    if(a <= b) {
        for(int i = a; i <= b; i++) {
            if(i % 5 == 0)
                sum += i;
        }
    }
    // Case 2. a가 더 큰 경우
    else {
        for(int i = b; i <= a; i++) {
            if(i % 5 == 0)
                sum += i;
        }
    }
    
    printf("%d", sum);
    return 0;
}