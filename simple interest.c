#include <stdio.h>
void main()
{
int p,si;
float r,t ;
//p=principal amount,t=time period in months,r=rate of interest
printf("\n Enter the p,r,t");
scanf("\n%d%f%f",&p,&r,&t);
si=(p*t*r)/100;
printf("\nThe simple interest is %d",si);
}
    