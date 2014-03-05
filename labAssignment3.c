#include <stdio.h>
#include <math.h>                                                                                
main()
{
   float x,y,z,a,b;
   
   printf("The program evalutes the expressions given in Question\n");
   printf("enter the value of x :");
   scanf("%f",&x);
   printf("enter the value of y :");
   scanf("%f",&y);
   printf("enter the value of z :");
   scanf("%f",&z);

   a = pow(x,3) + (2*pow(x,2)) + (3*x);
   b = x + pow(y,2) + pow(z,3);

   printf("the value of (x^3 + 2x^2 + 3x) = %f \n\n",a);
   printf("the value of (x + y^2 + z^3) = %f \n\n",b); 
   
   return 0;

} 
