//Write a program which accept number from user and return the count even digits.
// Input:2396
// Output:2

#include<stdio.h>
int CountEven(int);
int main()
{ 
    int iValue=0;
    int iRet=0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet=CountEven(iValue);

    printf("%d",iRet);
    return 0;

}
int CountEven(int iNo)
{
    int iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    if(iNo==0)
    {
        return 1;
    }
    int iCnt=0;
    int Count=0;

    iCnt=1;
    while(iNo>0)
    {
        iDigit=iNo%10;
        if((iDigit%2)==0)
        {
            Count=Count+1;
        }
        iNo=iNo/10;
    }
    return Count;
}