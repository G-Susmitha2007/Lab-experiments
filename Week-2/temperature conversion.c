#include <stdio.h>
void main()
{
float Fahrenheit,Celsius;
//conversion of fahrenheit to celsius
printf("\n Enter the temperature in Fahrenheit value:");
scanf("\n%f",&Fahrenheit);
Celsius=(Fahrenheit-32)*5/9;
printf("\nThe temperature in celsius is %f",Celsius);
//conversion of celsius to fahrenheit 
printf("\n Enter the tempfeature in Celsius value:");
scanf("\n%f",&Celsius);
Fahrenheit=(Celsius*9/5)+32;
printf("\n The temperature in fahrenheit is %f",Fahrenheit);
}
    