#include <stdio.h>
int main(void)
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("%d is larger", a);
    }
    else if (b > a)
    {
        printf("%d is larger", b);
    }
    else
    {
        printf("Both are equal");
    }
    return 0;
}
