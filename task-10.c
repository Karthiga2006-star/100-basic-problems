#include <stdio.h>
int n1,odd;
int main(){
    printf("Enter a number: ");
    scanf("%d", &n1);
    if(n1%2==0){
        printf("given number is even");
    }else{
        printf("given number is odd");
    }
    return 0;
}