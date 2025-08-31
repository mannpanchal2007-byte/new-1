#include<stdio.h>

int main()
{
   float amount,rate,time,interest;

   printf("enter amount");
   scanf("%f",&amount);

   printf("enter rate");
   scanf("%f",&rate);   

   printf("enter time");
   scanf("%f",&time);

   interest = (amount * rate * time) / 100;  

   printf("%f interest\n",interest);

   return 0;
}