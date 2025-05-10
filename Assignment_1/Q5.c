////////////////////////////////////////////////
//
// File name :   Q5.c
// Description : Use to accept one number from user and print that number of * on screen
// Author :      Siddhi Vikas Ubhe
// Date :        9/05/25
//
/////////////////////////////////////////////

#include <stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    printf("Enter one number :");
    scanf("%d", &iValue);

    Accept(iValue);

    return 0;
}