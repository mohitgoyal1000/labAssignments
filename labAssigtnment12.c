#include<stdio.h>
#include<math.h>
main()
{
 int a,b,c;
 
 printf("Welcome\nThis program finds the reverse of a number\nplease enter the number : _\b");
 scanf("%d",&a);
 c=0;
  
 while(a!=0)
 {
  c = c*10;
  b = a%10;
  c = c+b;
  a = a/10;
 }

 printf("the reversed number is %d\n\n Thankyou\nMohit",c);
 

 
return 0;
}


