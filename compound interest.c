#include <stdio.h>
#include<math.h>
void main()
{
int p;
float r,t,ci;
//p=principal amount,t=time period in months,r=rate of interest per annum,ci=compound interest 
printf("\n Enter the p,r,t");
scanf("\n%d%f%f",&p,&r,&t);
ci=p*pow(1+r/100,t)-p;
printf("\nThe compound interest is %f",ci);
}
    