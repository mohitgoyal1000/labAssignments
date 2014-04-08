#include<stdio.h>

main()
{
	long int num,i,j,fac = 1;
	
	printf("Welcome ! the progarm finds the factorial of a number\n");
	printf("Please Enter the number : ");
	scanf("%d",&num);
	
	printf("%d! = ",num);
	for(i=1;i<=num; i++)
	{
		fac *= i;
		printf(" %d *",i);
	}
	printf(" = %d",fac);
	return 0;
}
