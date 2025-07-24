#include <stdio.h>
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    if (number>0){
        printf("The given number is positive");
    }else if (number<0){
        printf("The given number is negative");
    }else{
        printf("The given number is zero");
    }
    return 0;
}