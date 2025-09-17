////////////////////////////////////////////////
//
// File name :   Q5.c
// Description : accept one number from user &
//               return difference between summation of all its factors and non factors
// Author :      Siddhi Vikas Ubhe
// Date :        15/05/25
//
/////////////////////////////////////////////

#include<stdio.h>

int FactDiff(int iNo)
{
    int iSumFact = 0;
    int iSumNon = 0;
    int iCnt = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNon = iSumNon + iCnt;
        } 
    }
    return iSumFact - iSumNon;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Factors are : ");
    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}
