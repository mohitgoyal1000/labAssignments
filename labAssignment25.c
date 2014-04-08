#include<stdio.h>

main()
{
	char choice;
	
	printf("Welcome ! the program finds the memory requirement of verious datatypes");
	printf("Whose size youwant to determine ?\n");
	printf(" a. Intezer\n b. Float\n c. Character\n d. Long Float(double)\n e. Long Intezer\n ");
	scanf("%c",&choice);
	
	switch(choice)
	{
		case 'a' : printf("The size is %d bytes",sizeof(int));
		           break;
        case 'b' : printf("The size is %d bytes",sizeof(float));
		           break;
		case 'c' : printf("The size is %d bytes",sizeof(char));
		           break;
		case 'd' : printf("The size is %d bytes",sizeof(double));
		           break;
		case 'e' : printf("The size is %d bytes",sizeof(long int));
		           break;
		default : printf("Please enter a valid choice");		   		   		   		             
	}
	
	
	return 0;
}



