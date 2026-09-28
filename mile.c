#include<stdio.h>
#include<conio.h>
void main()
{
    float d,f,mileage;
    clrscr();
    printf("Enter distance: ");
    scanf("%f",&d);
    printf("Enter fuel consumed: ");
    scanf("%f",&f);
    mileage = d / f;
    printf("Mileage = %.2f km/l",mileage);
    getch();
}
