#include<stdio.h>

main()
{
 int a,b,c,i;
 printf("welcome\nthis programs prints the table of the given number\nenter the number :");
 scanf("%d",&a);
 
 for(i=1; i < 11; i++)
 {
   c = a * i;
   printf("%d  *  %d  = %d\n",a,i,c);
 }

  return 0;
}
   
