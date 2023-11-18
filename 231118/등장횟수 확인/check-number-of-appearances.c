#include <stdio.h>

int main() {
    int a;
    int cnt2 = 0;
    for(int i = 0; i <= 5; i++){
        scanf("%d", &a);
        if(a%2==0){
            
            cnt2++;
        }
    }
    printf("%d\n", cnt2);
    return 0;
}