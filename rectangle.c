#include<stdio.h>

int main()
{
   int l,b,area,perimeter;

   printf("enter l");
   scanf("%d",&l);

   printf("enter b");
   scanf("%d",&b);

   area = l * b;
   perimeter = 2 * ( l + b);

   printf("%d area\n",area);
   printf("%d perimeter\n",perimeter);
   
   return 0;
}