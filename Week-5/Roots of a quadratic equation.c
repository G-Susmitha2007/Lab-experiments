#include <stdio.h>
#include<math.h>
void main()
{
int a,b,c;
float x1, x2;
    printf("Enter the a,b,c values: ");
    scanf("%d%d%d",&a,&b,&c);
if (a != 0)
 {
   if ((b * b - 4 * a * c) >= 0)
   {
      x1 = (-b + sqrt(b * b - 4 * a * c)) / (2.0 * a);
      x2 = (-b - sqrt(b * b - 4 * a * c)) / (2.0 * a);
      printf("The roots are %f and %f", x1, x2);
   }
    else
    {
      printf("Roots are imaginary");
    }
 }   
    else
    {
        printf("a should not be zero");
    }

}