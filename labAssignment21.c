#include<stdio.h>

main()
{
	int i,j,k,n;
	
	printf("The program prints the pattern given in Question");
	printf("\nPlease enter number of rows required : ");
	scanf("%d",&n);
	
	
	for(i=0; i<=n ; i++)
	{
		k = 1;
	   for(j=1; j<=i ; j++)
	   {
	   	
		printf("%d\t",k);
		k++;
	   }   
	   
	   printf("\n");
    }
	return 0;
	
}
