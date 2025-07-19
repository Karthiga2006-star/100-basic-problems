#include <stdio.h>
int main(){
    float celcius, fahren;
    printf("Enter the Celcius value: ");
    scanf("%f", &celcius);
    fahren= ((9*celcius)/5)+32;
    printf("The fahrenheit value for the given celcius value is: %f\n", fahren);
    return 0;
}