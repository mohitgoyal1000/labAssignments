#include<stdio.h>

main()
{
  int a;

  printf("Welcome\n\nThe program tests if the year ia a leap year or not\n\nenter the year: ");
  scanf("%d",&a);
  if(a%100 == 0)
  { 
    if((a%400 == 0) && (a%4==0) )
     {
       printf("Leap Year");
     }
    else
     {
       printf("not a leap year"); 
     }
   }
   
   else if(a%100 != 0)
   { 
     if(a%4 == 0)
      { 
        printf("Leap Year");
      }
      else
       {
         printf("Not a LEap Yaer");
       }
      }
    return 0;
}


