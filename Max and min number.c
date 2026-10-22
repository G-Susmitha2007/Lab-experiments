#include <stdio.h>
void main()
{
int a,b,c,d;
printf("\n Enter the a,b,c,d values:");
scanf("\n%d%d%d%d",&a,&b,&c,&d);
if(a>b && a>c && a>d)
printf("\n%d is the biggest number",a);
else if(b>c && b>d)
printf("\n%d is the biggest number",b);
else if(c>d)
printf("\n%d is the biggest number",c);
else
printf("\n%d is the biggest number",d);
if(a<b && a<c && a<d)
printf("\n%d is the smallest number",a);
else if(b<c && b<d)
printf("\n%d is the smallest number",b);
else if(c<d)
printf("\n%d is the smallest number",c);
else
printf("\n%d is the smallest number",d);
}