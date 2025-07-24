#include <stdio.h>
int n1,n2,n3,avg;
int main(){
    printf("Enter number 1: ");
    scanf("%d", &n1);
    printf("Enter number 2: ");
    scanf("%d", &n2);
    printf("Enter number 3: ");
    scanf("%d", &n3);
    avg = (n1+n2+n3)/3;
    printf("average of given numbers are : %d", avg);
}