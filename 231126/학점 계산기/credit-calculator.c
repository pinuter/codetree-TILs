#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    double arr[5];
    double sum = 0;
    for(int i = 0; i < n; i++){
        scanf("%lf", &arr[i]);}

        for(int i = 0; i < n; i++){
        sum += arr[i];}
        double avr;
        avr = sum / n;
        printf("%.1lf\n", avr);
        if(avr >= 4.0){
            printf("Perfect", avr);
        }
        else if(avr >= 3.0){
            printf("Good", avr);
        }
        else{
            printf("Poor", avr);
        }
    
    return 0;
}