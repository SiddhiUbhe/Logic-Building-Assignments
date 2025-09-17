////////////////////////////////////////////////
//
// File name :   Q4.c
// Description : accept one number from user &
//               return summation of all its non factors
// Author :      Siddhi Vikas Ubhe
// Date :        15/05/25
//
/////////////////////////////////////////////

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Factors are : ");

    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return 0;
}
