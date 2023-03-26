#include<stdio.h>

int main()
 {
 char ch='\0';

 printf("Enter a character\t");
 scanf("%c",&ch);

 switch(ch)
 {
 case 'A':
 case 'B':
 case 'C':
      printf("The entered character is in range A-C");
 break;

 case 'X':
 case 'Y':
 case 'Z':
      printf("The entered character is in range X-Z");
 break;
  
 default:
      printf("The entered character is neither in range A-C nor in range X-Z");
      return 0;
 }
 
 }