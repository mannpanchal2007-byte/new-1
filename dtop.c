#include<stdio.h>

int main()
{
   float dollars,pounds;

   printf("enter dollars");
   scanf("%f",&dollars);
   
   pounds = dollars * 0.74;

   printf("%f dollars = %f pounds\n",dollars,pounds);

   return 0;
}