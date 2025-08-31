#include<stdio.h>

int main()
{
   int a,b,c;

   printf("enter two number");
   scanf("%d %d",&a,&b);

   if (b != 0) {
        c = a / b;
    } else {
        c = 0;
    }

   
   if (b != 0) {
        printf("%d / %d = %d\n", a, b,c);
    } else {
        printf("Division by zero is not allowed.\n");
    }
   return 0;
}