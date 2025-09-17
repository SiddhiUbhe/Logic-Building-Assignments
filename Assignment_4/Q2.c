////////////////////////////////////////////////
//
// File name :   Q2.c
// Description : accept one number from user &
//               display its factors in decreasing order
// Author :      Siddhi Vikas Ubhe
// Date :        15/05/25
//
/////////////////////////////////////////////

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    for (iCnt = (iNo/2); iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Factors are :\n");

    FactRev(iValue);

    return 0;
}