#include<stdio.h>

main()
{
	int marks;
	
	printf("Welcome ! the Program tells your grade after you enter your marks : ");
	printf("\nPlease Enter your marks :");
	scanf("%d",&marks);
	
	if(marks > 100)
	{
		printf("Please Enter Valid marks");
	}
	else if(marks >= 90)
	{
		printf("Your Garde : A");
	}
	else if(marks >= 60)
	{
		printf("Your Garde : B");
	}
	else if(marks >= 50)
	{
		printf("Your Garde : C");
	}
	else if(marks >= 40)
	{
		printf("Your Garde : D");
	}
	else if(marks > 40 && marks >=0)
	{
		printf("Your Garde : E");
	}
	else 
	{
		printf("Plaese Enter Valid Marks");
	}


return 0;
}
