////////////////////////////////////////////////
//
// File name :   Q2.c
// Description : accept one number from user &
//               print even factors of that number
// Author :      Siddhi Vikas Ubhe
// Date :        9/05/25
//
/////////////////////////////////////////////

//Input  : 24
//Output : 1    2   4   6   8   12

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            if((iCnt == 1) || ((iCnt % 2) == 0))
            {
                printf("%d\t",iCnt);
            }            
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}