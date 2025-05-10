////////////////////////////////////////////////
//
// File name :   Q4.c
// Description : Use to accept two numbers from user and 
//               display first number in second number of times.
// Author :      Siddhi Vikas Ubhe
// Date :        9/05/25
//
/////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t", iNo); 
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    printf("Enter frequency : \n");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}