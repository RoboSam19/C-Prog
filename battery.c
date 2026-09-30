#include<stdio.h>
void main()
{
    float battery,consumed,remaining;
    clrscr();
    printf("Enter initial battery percentage: ");
    scanf("%f",&battery);
    printf("Enter consumed battery percentage: ");
    scanf("%f",&consumed);
    remaining = battery - consumed;
    printf("\nRemaining Battery Percentage = %.2f%%",remaining);
    getch();
}
