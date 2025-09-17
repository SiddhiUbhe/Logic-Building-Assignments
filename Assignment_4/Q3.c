////////////////////////////////////////////////
//
// File name :   Q3.c
// Description : accept one number from user &
//               display all its non factors
// Author :      Siddhi Vikas Ubhe
// Date :        15/05/25
//
/////////////////////////////////////////////

#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
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

    printf("Non factors are:\n");

    NonFact(iValue);

    return 0;
}
