#include<stdio.h>
#include<math.h>
main()
{
 int a,b,num,revNum,diff,e,f;
 
 printf("Welcome\nThis program checks whether the difference of a number and its reverse is a multiple of 9 \nplease enter the number : _\b");
 scanf("%d",&a);
 revNum=0;
 num = a; 
 while(a!=0)
 {
  revNum = revNum*10;
  b = a%10;
  revNum = revNum+b;
  a = a/10;
 }

  diff = num - revNum ;
 
 if((diff%9 == 0))
 {
   printf("the difference is multiple of 9\n\nMohit");
 }
 else
 {
  printf("oops! The diff is not multiple of 9\n\nMohit");
 }

 
return 0;
}


