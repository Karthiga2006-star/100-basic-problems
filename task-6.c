#include <stdio.h>
int main(){
    float principle, time, rate, si;
    printf("Enter the principle amount: ");
    scanf("%f", &principle);
    printf("Enter the time: ");
    scanf("%f", &time);
    printf("Enter the rate: ");
    scanf("%f", &rate);
    si= (principle*rate*time)/100;
    printf("The simple intrest for the given values: ");
    scanf("%f", &si);
}

