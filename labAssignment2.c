#include <stdio.h>

main()
{
  float cost,exTax,salesTax,roadTax,total;
  
   printf("enter the vehicle price: Rs ");
   scanf("%f",&cost);
   
   exTax = (15.0/100.0)*cost;
   printf("\nexcise Tax is Rs %f",exTax);

   salesTax = (10.0/100.0)*cost;
   printf("\nsales Tax is Rs %f",salesTax);

   roadTax = (1.0/100.0)*cost;
   printf("\nroad tax is Rs %f",roadTax);
  
   total = cost + exTax + salesTax + roadTax ;

   printf("\n\nTotal ammount to be paid is : Rs %f \n",total);

   return 0;
}
