#include <stdio.h>

int main() {
    int i;
    while(1){
        scanf("%d", &i);
        if(i == 25){
            printf("Good\n");
            break;
        }
        else if(i > 25){
            printf("Lower\n");
        }
        else{
            printf("Higher\n");
        }
    }
    return 0;
}