#include<stdio.h>

main()
{
	int count1 = 0, count2 = 0,i;
	
	for(i=0; i<100; i++)
	{
		
		if( i%2 != 0 && i%3 != 0)
		{
			continue;
		}
		else if(i%2 != 0)
		{
			printf("%d is not divisible by 2\n",i);
			count1++;
		}
		else if(i%3 != 0)
		{
			printf("%d is not divisible by 3\n",i);
			count2++;
		}
		
	
	}
	
	
	printf("Total numbers are %d", count1 + count2);
}
