#include<stdio.h>

main()
{
	int num,i,j=1;
	
	printf("Welcome! the program checks if the given number is prime or not");
	printf("\nPlease Enter the number : ");
	scanf("%d",&num);
	
	for(i=2; i<num;i++)
	{
		if(num%i == 0)
		{
			printf("Not Prime");
			break;
		}
		
	
	 
	}
	
	if(i== (num))
	{
		printf("Prime !");
	}
	
	return 0;
}
