#include<stdio.h>

main()
{
	int num,i,count,remainder,j;
	
	printf("Welcome ! the program finds the prime factors of Given number");
	printf("\nPlease enter the number : ");
	scanf("%d",&num);
	
	for(i=2; i< num; i++)
	{
		
		remainder = num%i ;
		
		if(remainder == 0)
		{
		  for(j=2; j<i; j++)
		  {
		  	if(i%j ==0)
		  	{
		  		
		  		break;
		  	}
		  }
		  
		  if(j==i)
		  {
		  	printf("\n%d",i);
		  }
	   } 
    }
		  
		  
}
