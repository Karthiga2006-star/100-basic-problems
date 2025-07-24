#include <stdio.h>
#include <math.h>
int n1, cube;
int main(){
    printf("enter a number: ");
    scanf("%d", &n1);
    cube = pow(n1,3);
    printf("the cube value is: %d", cube);
}