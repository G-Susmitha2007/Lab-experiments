#include <stdio.h>
void main()
{
int a,b,c,sum;
float average;
printf("\nEnter a,b,c values:");
scanf("\n%d%d%d",&a,&b,&c);
sum=a+b+c;
printf("\n%d",sum);
average=sum/3;
printf("\n%f",average);
}
