#include <stdio.h>
#include <limits.h>
int main() {
    int arr[100];
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i = 0; i < 100; i++){
        scanf("%d", &arr[i]);
        
        if(arr[i] == 999||arr[i] == -999){
            break;
        
        if(min > arr[i]){
            min = arr[i];
            
        }
        if(max < arr[i]){
            min = arr[i];
        }
        
        if(min == INT_MAX || max == INT_MIN){
            printf("NOPE\n");
        }
        else{
            printf("%d %d\n", max, min);
        }
    }
    }
    return 0;
}