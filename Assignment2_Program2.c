#include<stdio.h>
/////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Display
//  Description    :    It is used to accept a number and return the number of '*'s to be displayed to the main function. 
//  Input   :           int
//  Output  :           int
//  Author  :           Prathamesh D Joshi
//  Date    :           12/11/2024
//
////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    int iValue = iNo;
    while(iNo >iCnt)
    {
        printf("*");
        iNo--;
    }
}

////////////////////////////////////////////////////////////////////////
//
//2. Accept one no from user and print that number of '*' on Console.
//
///////////////////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;
    
    printf("Enter a number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
