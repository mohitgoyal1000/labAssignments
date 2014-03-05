#include<stdio.h>

main()
{
 int marks;
 
 printf("This Program finds your grade\nplease enter your marks _\b");
 scanf("%d",&marks);
 marks = marks/10;
 switch(marks)
 {
  case 10 : 
  case 9 : 
  case 8 : printf("Grade A");
             break;
  case 7 : 
  case 6 : printf("Grade B");
             break;
  case 5 : printf("Grade C");
             break;
  case 4 : printf("Grade D");
             break;
  case 3 : 
  case 2 : 
  case 1 : printf("Grade E");
             break;
  default : printf("Please check entered marks again");
 }

 return 0;
}





                 
