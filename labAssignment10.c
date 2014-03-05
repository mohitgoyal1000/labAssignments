#include<stdio.h>

main()
{
  int a,b,B,c,d,e,f,g,sum;
  printf("Welcome\nthis program finds the sum of first and last digit of the 4 digit number entered.\nplease enter the four digit number: ");
  scanf("%d",&a);
  
 B = a/1000;
 b = B*1000;
 c = a - b ;
 d = c/100;
 d =  d*100;
 e = c - d;
 f = e/10;
 f = f*10;
 g =  e- f;
 sum = B + g;
 printf("sum is %d",sum);
 
return 0;
}
  
