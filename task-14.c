#include <stdio.h>
#include <math.h>
int n1,square;
int main(){
    printf("enter a number: ");
    scanf("%d", &n1);
    square = pow(n1,2);
    printf("square of a number: %d", square);
}
