#include<stdio.h>
void main()
{
    int r1,r2,v,current,power,total,product;
    printf("Enter first resistor value: ");
    scanf("%d",&r1);
    printf("Enter second resistor value: ");
    scanf("%d",&r2);
    printf("Enter voltage: ");
    scanf("%d",&v);
    total = r1 + r2;
    current = v / total;
    power = v * current;
    product = r1 * r2;
    printf("\nTotal Resistance = %d",total);
    printf("\nCurrent = %d A",current);
    printf("\nPower = %d W",power);
    printf("\nProduct of resistor values = %d",product);
}
