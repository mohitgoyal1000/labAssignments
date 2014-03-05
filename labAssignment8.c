#include<stdio.h>
#include<math.h>
main()
{
  int a,b,i,c,aNew,A,sum = 0;
  printf("Enter the digit : ");
  scanf("%d",&a);
  
 b = 10000;
 while((a/b)==0)
{  
  c = pow(10,b);
  aNew = (a/b)*(100);
  A = a - aNew;
  b = b-1;
}
    
   printf("number of digits %d",A);
  return 0;
    
   
} 
  
