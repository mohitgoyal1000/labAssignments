#include<stdio.h>

main()
{
	int num1,num2,i,j,r1,r2,hcf;
	
	printf("Welcome ! the program finds greatest divisor of two intezers\n");
	printf("Please Enter first number : ");
	scanf("%d",&num1);
	printf("Please Enter second number : ");
	scanf("%d",&num2);
	
	for(i=2;i<=num1 && i<=num2; i++)
	{
		r1 = num1%i;
		r2 = num2%i;
		if(r1 == r2)
		{
			hcf = i;
		}
	}
	
	printf("Greatest Common Divisor is %d",hcf);
	
	return 0;
}
