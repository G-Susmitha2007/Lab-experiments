#include <stdio.h>
void main()
{
int year;
printf("\n Enter a year:");
scanf("\n%d",&year);
if (year % 4==0)
printf("\n%d is a Leap year",year);
else
printf("\n%d is not a Leap year",year);
}