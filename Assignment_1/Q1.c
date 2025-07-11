////////////////////////////////////////////////
//
// File name :   Q1.c
// Description : Use to divide two numbers
// Author :      Siddhi Vikas Ubhe
// Date :        9/05/25
//
/////////////////////////////////////////////

#include <stdio.h>

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo2 > iNo1)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;

    return iAns;
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(15, 5);

    printf("Division is %d",iRet);

    return 0;
}
