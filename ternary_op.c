// ternary operator
#include <stdio.h>
int main()
{
    int age;
    printf("enter age: ");
    scanf("%d", &age);
    age >= 18 ? printf("Can vote") : printf("cannot vote");
    return 0;
}