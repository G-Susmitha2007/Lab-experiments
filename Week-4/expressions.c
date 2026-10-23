#include <stdio.h>
void main()
{
int A,B,C,D,E,F,G,i;
float a,b,c,d;
printf("\n Enter the A,B,C,D,E,F,G,i:");
scanf("\n%d%d%d%d%d%d%d%d",&A,&B,&C,&D,&E,&F,&G,&i);
a=A+B * C+(D * E)+F * G;
b=A/B * C-B+A * D/3;
c=A++ +B- --A;
d=(i++)+(++i);
printf("\n a value is %f",a);
printf("\n b value is %f",b);
printf("\n C value is %f",c);
printf("\n d value is %f",d);
}