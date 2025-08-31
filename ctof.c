#include<stdio.h>

int main()
{
   float celsius,fahrenheit;

   printf("enter celsuis");
   scanf("%f",&celsius);
   
   fahrenheit = (celsius * 9/5) + 32;

   printf("%f celsius = %f fahrenheit\n",celsius,fahrenheit);

   return 0;
}