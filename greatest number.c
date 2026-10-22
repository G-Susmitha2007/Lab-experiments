#include <stdio.h>
void main()
{
int a,b,c,n;
printf("\n Enter the a,b,c values:");
scanf("\n%d%d%d",&a,&b,&c);
n=(a>b && a>c)?a:((b>c)?b:c);
printf("\n%d is the greatest number",n);
}