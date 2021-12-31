/*3. Accept character from user. If it is capital then display all the
characters from the input characters till Z. If input character is small
then print all the characters in reverse order till a. In other cases
return directly.
Input : Q
Output : Q R S T U V W X Y Z
Input : m
Output : m l k j i h g f e d c b a
Input : 8
Output :
*/

#include<stdio.h>
void Display(char ch)
{
  int iCnt=0;
  
  for(iCnt=ch;iCnt<='Z';iCnt++)
  {
     printf("%c\t",ch);
     ch++;
  }
  for(iCnt=ch;iCnt>='a';iCnt--)
  {
     printf("%c\t",ch);
     ch--;
  }
  printf("\n");
}
int main()
{
  char cValue = '\0';
  printf("Enter the character\n");
  scanf("%c",&cValue);
  Display(cValue);
  return 0;
}
