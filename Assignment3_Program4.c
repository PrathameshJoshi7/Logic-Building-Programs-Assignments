#include<stdio.h>
/////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    DisplayConvert
//  Description    :    It is used to accept a character from user and conver the case and display it accordingly. 
//  Input   :           char
//  Output  :           char
//  Author  :           Prathamesh D Joshi
//  Date    :           12/11/2024
//
////////////////////////////////////////////////////////////////////////

void DisplayConvert(char cValue)
{
    if(cValue>='a'&& cValue<='z' )
    {
        cValue=cValue-'a'+'A';
        printf("%c",cValue);
    }
    else if(cValue>='A'&& cValue<='Z')
    {
        cValue=cValue+'a'-'A';
        printf("%c",cValue);
    }
}
////////////////////////////////////////////////////////////////////////
//
//4. Accept a character from user convert it's case and display it on the screen.
//
///////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    printf("Enter Character \n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);
    return 0;
}
