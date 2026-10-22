#include <stdio.h>
void main()
{
int n;
float r,t;
//n= number of units consumed,r=rate of the slab they fall in,t=the total bill amount
printf("\n Enter the number of units consumed n:");
scanf("%d",&n);
if(n<=100)
r=1.50;
else if(n>=101 && n<=200)
r=2.50;
else if(n>=201 && n<=500)
r=4.00;
else if(n>500)
r=6.00;
t=n*r;
printf("\n The total bill amount is %f",t);
}