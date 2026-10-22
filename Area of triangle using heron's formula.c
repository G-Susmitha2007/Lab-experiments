#include <stdio.h>
#include<math.h>
void main()
{
// To find the area of the triangle using heron's formula 
float a,b,c,s,A;
// A is the area of the triangle
//a,b,c are the sides of the triangle 
//s=(a+b+c)/2
printf("\n Enter the a,b,c values:");
scanf("\n%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
printf("\n s value is %f",s);
A=sqrt(s*(s-a)*(s-b)*(s-c));
printf("\nThe area of the triangle is %f",A);
}