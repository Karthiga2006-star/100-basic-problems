#include <stdio.h>
int main(){
    int width, breadth, area;
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);
    area = width*breadth;
    printf("The area of the rectangle for the given width and breadth: %d\n",area);
    return 0;
}