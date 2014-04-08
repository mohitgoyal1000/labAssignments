#include<stdio.h>

main()
{
	int n,i,j,a=1,b=1,c;
	
	printf("Welcome! this program finds the fibbonaci series upto given number of terms ");
	printf("\nEnter number of terms required : ");
	scanf("%d",&n);
	
	printf("1 + 1");
	for(i=2; i<n; i++)
	{
		c = a + b;
		a = b;
		b = c;
		
		printf(" + %d",c);
	}
	
	return 0;
}
