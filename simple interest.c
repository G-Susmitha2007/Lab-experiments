#include <stdio.h>
void main()
{
int p;
float r,t,si ;
//p=principal amount,t=time period in months,r=rate of interest,si=simple interest
printf("\n Enter the p,r,t");
scanf("\n%d%f%f",&p,&r,&t);
si=(p*t*r)/100;
printf("\nThe simple interest is %f",si);
}
    
