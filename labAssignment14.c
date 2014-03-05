#include<stdio.h>

main()
{
 char alphabet;
 
 printf("This program recognizes the given alphabet as vowel or consonent\n\nEnter the aplhabet: _\b");
 scanf("%c",&alphabet);

 switch(alphabet)
 {
  case 'a' : printf("Entered alphabet is Vowel");
             break;
  case 'e' : printf("Entered alphabet is Vowel");
             break;
  case 'i' : printf("Entered alphabet is Vowel");
             break;
  case 'o' : printf("Entered alphabet is Vowel");
             break;
  case 'u' : printf("Entered alphabet is Vowel");
             break;
  default : printf("Entered alphabet is a consonant");
 }

 return 0;
}





                 
