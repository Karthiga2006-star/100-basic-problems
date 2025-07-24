#include <stdio.h>
#include <math.h>
int n1;
double circum;
int main(){
    double pi = 3.14;
    printf("enter a radius: ");
    scanf("%d", &n1);
    circum = 2*pi*n1;
    printf("the circumference for the given value is: %f", circum);
    return 0;
}