////////////////////////////////////////////////
//
// File name :   Q2.c
// Description : Use to accept one number from user and print that number of * on screen.
// Author :      Siddhi Vikas Ubhe
// Date :        9/05/25
//
/////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    iCnt = 1;
    while(iNo >= iCnt )
    {
        printf("*");
        iNo--;
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}