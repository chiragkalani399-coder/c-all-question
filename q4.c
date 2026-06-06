// perimeter of the rectangle
#include <stdio.h>
int main()
{
    int l, b;
    printf("enter the length of the rectangle: ");
    scanf("%d", &l);
    printf("enter the breadth of the rectangle: ");
    scanf("%d", &b);

    printf("perimeter of the rectangle is %d", 2 * l + 2 * b);
    return 0;
}