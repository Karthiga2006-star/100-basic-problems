#include <stdio.h>
int n1,n2,largest;
int main(){
    printf("Enter number 1: ");
    scanf("%d", &n1);
    printf("Enter number 2: ");
    scanf("%d", &n2);
    if (n1>n2){
        printf("%d is greater number", n1);
    }else{
        printf("%d is greater number", n2);
    }
}