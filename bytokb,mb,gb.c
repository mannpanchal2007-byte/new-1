#include<stdio.h>

int main()
{
   int bytes,kb,mb,gb;

   printf("enter bytes");
   scanf("%d",&bytes);
   
   kb = bytes / 1024;
   mb = bytes / (1024*1024);
   gb = bytes / (1024*1024*1024);

   printf("%d bytes = %d kb\n",bytes,kb);
   printf("%d bytes = %d mb\n",bytes,mb);
   printf("%d bytes = %d gb\n",bytes,gb);
   
   return 0;
}