#include <stdio.h>
void main()
{
    int temp;
    printf("Enter engine temperature (in Celsius): ");
    scanf("%d", &temp);
    if (temp > 85)
    {
        printf("\nWarning: Overheating detected! Temperature is too high.");
    }
    else if (temp < 50)
    {
        printf("\nStatus: Engine is running cold.");
    }
    else
    {
        printf("\nStatus: Engine temperature is optimal.");
    }
}
