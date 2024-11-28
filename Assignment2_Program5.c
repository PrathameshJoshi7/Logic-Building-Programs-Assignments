#include<stdio.h>
/////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    ChkEven
//  Description    :    It is used to accept a number , then validate condition and display if the number is an odd number or a even number. 
//  Input   :           int,int
//  Output  :           int
//  Author  :           Prathamesh D Joshi
//  Date    :           12/11/2024
//
////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    int iValue = iNo;
    if(iNo%2 == 0)
    {
        printf("it is even");
    }
    else
    {
        printf("it is Odd");
    
    }
}

////////////////////////////////////////////////////////////////////////
//
//5. Accept a no from user . display if it is oDD or Even  on Console.
//
///////////////////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    //printf("%d is",bRet);

    return 0;
}