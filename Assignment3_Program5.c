#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
/////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    ChkVowel
//  Description    :    It is used to accept a character from user and identify whether it is a vowel or a consonent and return it to the main function accordingly. 
//  Input   :           char
//  Output  :           char
//  Author  :           Prathamesh D Joshi
//  Date    :           12/11/2024
//
////////////////////////////////////////////////////////////////////////

BOOL ChkVowel(char userChar)
{
    if(userChar=(userChar=='a'||userChar=='e'||userChar=='i'||userChar=='o'||userChar=='u'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
////////////////////////////////////////////////////////////////////////
//
//5. Accept a character from user identify whether it is a vowel or a consonent  and display it on the screen.
//
///////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet=ChkVowel(cValue);

    if (bRet==TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not a Vowel");
    }

    return 0;
}