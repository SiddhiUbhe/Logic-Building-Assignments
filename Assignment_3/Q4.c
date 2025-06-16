////////////////////////////////////////////////
//
// File name :   Q4.c
// Description : accept one character from user &
//               convert case of that character.
// Author :      Siddhi Vikas Ubhe
// Date :        9/05/25
//
/////////////////////////////////////////////

// Input : a      Output : A
// Input : D      Output : d

#include <stdio.h>

void DisplayConvert(char CValue)
{
    if((CValue >= 'A') && (CValue <= 'Z'))
    {
        CValue = CValue + 32;
        printf("%c",CValue);
    }
    else if((CValue >= 'a') && (CValue <= 'z'))
    {
        CValue = CValue - 32;
        printf("%c",CValue);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}