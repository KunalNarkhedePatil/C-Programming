/*
4. Accept Character from user and check whether it is small case or
not (a-z).
Input : g
Output : TRUE
Input : D
Output : FALSE
*/

#include<stdio.h>
#include<stdbool.h>
bool ChkSmall(char ch)
{
   if(ch>='a' && ch<='z')
   {
      return true;
   }
   else
   {
     return false;
   }
}
int main()
{
   char ch='\0';
   bool bRet=false;
   
   printf("Enter the Character\n");
   scanf("%c",&ch);
   
   bRet=ChkSmall(ch);
   if(bRet==true)
   {
      printf("It is Small\n");
   }
   else
   {
      printf("It is Not Small");
   }
   return 0;
}
