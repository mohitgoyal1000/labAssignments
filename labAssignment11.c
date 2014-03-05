#include<stdio.h>

main()
{ int a,b,c;
 printf("Welcome, this program finds the greatest of three numbers\n\nenter the three numbers separated by comma:");
 scanf("%d,%d,%d",&a,&b,&c);
 
 if((a>b) && (a>c) && (a!=b) && (b!=c) && (a!=c))
 {
  printf("a is greatest");
 }
 if((b>a) && (b>c) && (a!=b) && (b!=c) && (a!=c))
 {
  printf("b is greatest");
 }
 if((c>b) && (c>a) && (a!=b) && (b!=c) && (a!=c))
 {
  printf("c is greatest");
 }
 if((a==b) && (b == c))
 { 
  printf("the numbers are equal");
 }
 if((a==b) && (b!=c))
 {
  printf("a is equal to b");
 }
 if((a!=b) && (b == c))
 {
  printf("b is equal to c");
 }
 if( (a==c) && (b!=c))
 {
 printf(" a is equal to c");
 }
 return 0;
}
