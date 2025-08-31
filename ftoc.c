#include<stdio.h>

int main()
{
   float fahrenheit,celsius;

   printf("enter fahrenheit");
   scanf("%f",&fahrenheit);
   
   celsius = (fahrenheit - 32) * 5/9 ;

   printf("%f fahrenheit = %f celsius\n",fahrenheit,celsius);

   return 0;
}