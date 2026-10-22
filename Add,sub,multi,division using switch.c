#include <stdio.h>
void main()
{
int choice;
float a, b;
  printf("\n1. Addition");
  printf("\n2. Subtraction");
  printf("\n3. Multiplication");
  printf("\n4. Division");
  printf("\nEnter your choice: ");
  scanf("%d", &choice);
  printf("\nEnter two numbers: ");
  scanf("%f%f",&a,&b);
  switch (choice)
   {
      case 1:
         printf("Result = %f", a + b);
         break;
      case 2:
         printf("Result = %f", a - b);
         break;
      case 3:
         printf("Result = %f", a * b);
         break;
      case 4:
      if (b != 0)
          {
             printf("Result = %f", a / b);
          }
      else
          {
             printf("Division by zero is not possible");
          }
          break;
      default:
          printf("Invalid option");
    }
}
