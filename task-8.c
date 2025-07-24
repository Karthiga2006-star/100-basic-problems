#include <stdio.h>
int main() {
    int n1, n2, r;
    printf("Enter number 1: ");
    scanf("%d", &n1);
    printf("Enter number 2: ");
    scanf("%d", &n2);
    r = n1 % n2;
    printf("The remainder of the given values is: %d\n", r);
    return 0;
}
