// write a fxn to calculate area of square, rectangle, and circle
int square_area(int s)
{
    return s * s;
}
int rectangle_area(int l, int b)
{
    return l * b;
}
float circle_area(int r)
{
    return 3.14 * r * r;
}
#include <stdio.h>
int main()
{
    int s;
    printf("enter side of the square: ");
    scanf("%d", &s);
    int l;
    printf("enter length of the rectangle: ");
    scanf("%d", &l);
    int b;
    printf("enter breadth of the rectangle: ");
    scanf("%d", &b);
    float r;
    printf("enter radius of the circle: ");
    scanf("%f", &r);

    printf("Area of the square is %d  \n", square_area(s));
    printf("Area of the rectangle is %d \n", rectangle_area(l, b));
    printf("Area of the circle is %f \n", circle_area(r));
    return 0;
}