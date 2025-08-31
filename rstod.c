#include<stdio.h>

int main()
{
   int rupees,dollars;

   printf("enter rupees");
   scanf("%d",&rupees);
   
   dollars = rupees / 48;

   printf("%d rupees = %d dollars\n",rupees,dollars);

   return 0;
}