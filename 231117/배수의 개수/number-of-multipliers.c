#include <stdio.h>

int main() {
    // 변수 선언
    int a, cnt3 = 0, cnt5 = 0;

	// 입력
	for(int i = 1; i <= 10; i++) {
		scanf("%d", &a);
		
		if(a % 3 == 0)
			cnt3++;
		if(a % 5 == 0)
			cnt5++;
	}

    // 출력
	printf("%d %d", cnt3, cnt5);

    return 0;
}