#include <stdio.h>
#include <math.h>
int n1,n2;
long result=1;
int main(){
    printf("enter a number: ");
    scanf("%d", &n1);
    printf("enter a exponential power: ");
    scanf("%d", &n2);
    for ( int i=0 ; i<n2; i++){
        result *= n1; 
    }
    printf("exponent of a number: %d", result);
}