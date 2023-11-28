#include <stdio.h>

int main() {
    char arr[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
    
    int idx = -1;

    for(int i = 0; i < 6; i++){
        if(arr[i] == 'L' || arr[i] == 'E' || arr[i] == 'B' || arr[i] == 'R' || arr[i] == 'O' || arr[i] == 'S'){
            idx = i;
            break;  // 원하는 문자를 찾았으면 반복문 종료
        }
    }

    if(idx == -1){
        printf("None");
    }
    else{
        printf("%d", idx);
    }

    return 0;
}