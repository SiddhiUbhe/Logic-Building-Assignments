////////////////////////////////////////////////
//
// File name :   Q3.c
// Description : Use to print 5 to 1 numbers on screen
// Author :      Siddhi Vikas Ubhe
// Date :        9/05/25
//
/////////////////////////////////////////////

#include <stdio.h>

void Display()
{
    int i = 0;
    i = 5;
    while(i >= 1)
    {
        printf("%d", i);
        i--;
    }
}

int main()
{
    Display();

    return 0;
}