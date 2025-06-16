////////////////////////////////////////////////
//
// File name :   Q1.c
// Description : accept one number from user &
//               print that number of even numbers on screen
// Author :      Siddhi Vikas Ubhe
// Date :        9/05/25
//
/////////////////////////////////////////////

// Input  : 7
// Output : 2   4   6   8   10  12  14

#include <stdio.h>

void PrintEven(int iNo)
{    

    if(iNo <= 0)
    {
        return;
    }

    int iNum = 2, iCnt = 0;

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("%d\t",iNum);
        iNum = iNum + 2;
    }
    printf("\n");
    
}

int main()
{
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}