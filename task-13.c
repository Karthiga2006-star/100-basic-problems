#include <stdio.h>
int n1,n2,smallest;
int main(){
    printf("Enter number 1: ");
    scanf("%d", &n1);
    printf("Enter number 2: ");
    scanf("%d", &n2);
    if (n1<n2){
        printf("%d is smalest number", n1);
    }else{
        printf("%d is smallest number", n2);
    }
}