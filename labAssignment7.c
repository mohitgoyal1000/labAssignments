#include<stdio.h>
#include<math.h>

#include<stdlib.h>

main()
{
  float a,b,c,D,X1,X2,d,e;
  printf("Welcome\n\nthe program finds the root of a quadratic equation\n\nax^2 + bx + c = 0\n\n");
  printf("Enter sthe value of a :");
  scanf("%f",&a);
  printf("Enter the value of b :");
  scanf("%f",&b);
  printf("Enter the value of c :");
  scanf("%f",&c);

  d = (b*b)-4*a*c;
  D = (pow(d,0.5))/(2*a);
  e = (-b)/(2*a);
  X1 = e + D;
  X2 = e - D;
  
  if(d>=0)
  {
    printf("roots are %f and %f", X1,X2);
  }
  else if (d< 0)
  {
    d = -d;
    D = (pow(d,0.5)/(2*a));
    printf("the roots are\n");
    printf("%f +i%f\n\n",e,D);
    
    printf("%f -i%f",e,D);
    
   }

 return 0;
}

  
  
    
  
