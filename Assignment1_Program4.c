#include<stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Check
//  Description    :    It is used to return true of false value to the main function. 
//  Input   :           int
//  Output  :           int
//  Author  :           Prathamesh D Joshi
//  Date    :           12/11/2024
//
////////////////////////////////////////////////////////////////////////

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if((iNo%5)==0)
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
// 4. Accept one number and check if it is divisible by 5 or not .
//
///////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet = Check(iValue);
    if(bRet==TRUE)
    {
        printf("Divisible by 5");

    }
    else
    {
        printf("Not Divisible by 5");
    }
    return 0;
}