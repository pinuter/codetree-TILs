#include <stdio.h>

int main() {
    char arr[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
    
    int idx = -1;

    for(int i = 0; i < 6; i++){
        if(arr[i] == 'L'){
            idx = i;
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