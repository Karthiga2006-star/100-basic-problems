#include <stdio.h>
int n1,n2,temp;
int main(){
    printf("enter number 1: ");
    scanf("%d", &n1);
    printf("enter number 2: ");
    scanf("%d", &n2);
    printf("before swapping: \nNumber1= %d \nNumber2= %d" , n1,n2);
    temp = n1;
    n1= n2;
    n2= temp;
    printf("\nthe swapped variables are: \nNumber1= %d \nNumber2=%d", n1,n2);
    return 0;
}
