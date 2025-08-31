#include<stdio.h>

int main()
{
   int side,area,perimeter;

   printf("enter side");
   scanf("%d",&side);

   area = side * side;
   perimeter = 4 * side;

   printf("%d area\n",area);
   printf("%d perimeter\n",perimeter);
   
   return 0;
}