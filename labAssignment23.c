#include<stdio.h>

main()
{
	int age,n,i,count = 0;
	
	printf("Welcome ! The progarm counts the number of students having age 15 to 20 out of n students");
	printf("\nEnter number of students : ");
	scanf("%d",&n);
	
	for(i = 1; i <=n; i++)
	{
		printf("Enter the age of student %d : ",i);
		scanf("%d",&age);
		if(age >= 15 && age <= 20)
		{
			count++;
		}
	
	}
	
	printf("The num of students aged between 15 and 20 is %d",count);
	
	return 0;
}
