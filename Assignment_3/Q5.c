////////////////////////////////////////////////
//
// File name :   Q5.c
// Description : accept one character from user &
//               check whether that character is vowel(a,e,i,o,u) or not.
// Author :      Siddhi Vikas Ubhe
// Date :        9/05/25
//
/////////////////////////////////////////////

// Input : E   Output : TRUE
// Input : d   Output : FALSE  

#include <stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool ChkVowel(char chValue)
{
    if(chValue == 'a' || chValue == 'e' || chValue == 'i' || chValue == 'o' || chValue =='u' || 
       chValue == 'A' || chValue == 'E' || chValue == 'I' || chValue == 'O' || chValue == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter character\n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;

}