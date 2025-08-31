#include<stdio.h>

int main()
{
   int kilograms,grams;

   printf("enter kilograms");
   scanf("%d",&kilograms);
   
   grams = kilograms * 1000;

   printf("%d kilograms = %d grams\n",kilograms,grams);

   return 0;
}