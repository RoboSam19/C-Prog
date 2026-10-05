#include <stdio.h>
void main()
{
    int s1, s2, sum;
    clrscr();
    printf("Enter value of sensor 1: ");
    scanf("%d", &s1);
    printf("Enter value of sensor 2: ");
    scanf("%d", &s2);
    sum = s1 + s2;
    if (sum > 100)
    {
        printf("\nTrue: Sensor total is greater than 100.");
    }
    else if (sum < 100)
    {
        printf("\nFalse: Sensor total is smaller than 100.");
    }
    else
    {
        printf("\nSensor total is equal to 100.");
    }
    getch();
}
