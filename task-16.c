#include <stdio.h>
#include <math.h>
int n1;
double area;
int main(){
    double pi = 3.14;
    printf("enter a area: ");
    scanf("%d", &n1);
    area = pi*pow(n1,2);
    printf("the area for the given value is: %f", area);
    return 0;
}