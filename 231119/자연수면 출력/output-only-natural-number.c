#include <stdio.h>

int main() {
    // 변수 선언
    int a, b;

	// 입력
	scanf("%d %d", &a, &b);
    
    // 출력
	if(a >= 1) {
		for(int i = 1; i <= b; i++)
			printf("%d", a);
	}
	else {
		printf("0");
	}
	
    return 0;
}