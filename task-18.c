#include <stdio.h>
#include <math.h>
int n1,n2,exponent;
int main(){
    printf("enter a number: ");
    scanf("%d", &n1);
    printf("enter a exponential power: ");
    scanf("%d", &n2);
    exponent = pow(n1,n2);
    printf("exponent of a number: %d", exponent);
}