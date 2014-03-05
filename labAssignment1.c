#include <stdio.h>

//the program finds average of five numbers 
main()
{
   float a,b,c,d,e,avg;
   
    printf("enter the first number _\b"); //asking the user to input the numbers one by one
    scanf("%f",&a);
    printf("enter the second numner _\b");
    scanf("%f",&b);
    printf("enter the third number _\b");
    scanf("%f",&c);
    printf("enter the fourth number _\b");
    scanf("%f",&d);
    printf("enter the first number _\b");
    scanf("%f",&e);

    avg = (a+b+c+d+e)/5.0;  //formula to calculate average
    printf("avd temperature is %f",avg);

    return 0;

}

     


