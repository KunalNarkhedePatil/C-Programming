/*
2. Accept character from user. If character is small display its
corresponding capital character, and if it small then display its
corresponding capital. In other cases display as it is.
Input : Q
Output : q
Input : m
Output : M
Input : 4
Output : 4
Input : %
Output : %
*/
#include<stdio.h>
int Display(char ch)
{   
   if(ch>='A' && ch<='Z')
   {
      return ch+32;
   }
   else if(ch>='a' && ch<='z')
   {
      return ch-32;
   }
}
int main()
{
  char cValue='\0';
  int iRet='\0';
  
  printf("Enter the Character\n");
  scanf("%c",&cValue);
  
  iRet=Display(cValue);
  printf("The Corresponding letter is : %c\n",iRet);
  
  return 0;
}
