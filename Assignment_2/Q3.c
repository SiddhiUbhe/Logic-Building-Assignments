////////////////////////////////////////////////
//
// File name :   Q3.c
// Description : Use to accept one number from user 
//               if number is less than 10 then print "Hello"
//               otherwise print "Demo".
// Author :      Siddhi Vikas Ubhe
// Date :        9/05/25
//
/////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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