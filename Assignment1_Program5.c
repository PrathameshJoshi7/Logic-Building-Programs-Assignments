#include<stdio.h>
/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Accept
//  Description    :    It is used to accept a number and return the number of '*'s to be displayed to the main function. 
//  Input   :           int
//  Output  :           int
//  Author  :           Prathamesh D Joshi
//  Date    :           12/11/2024
//
////////////////////////////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;
    for (iCnt=0;iCnt<iNo;iCnt++)
    {
        printf("*");
    }
}
////////////////////////////////////////////////////////////////////////
//
//5. Accept a no from user and print that number of '*' on Console.
//
///////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;
}