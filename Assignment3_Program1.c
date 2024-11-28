#include<stdio.h>
/////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    PrintEven
//  Description    :    It is used to accept a number , then validate condition,Calculate even number and print and display the numbers in even digit till the entered number count comes. 
//  Input   :           int
//  Output  :           int
//  Author  :           Prathamesh D Joshi
//  Date    :           12/11/2024
//
////////////////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
   int iValue =  iNo, i = 0;
    if (iNo<=0)
    {
        return;
    }
    else
    {
        printf("The first %d even numbers are:\n", iNo);
        for (i = 1; i <=iNo; i++) 
        {
            printf("%d ", 2 * i); 
        } 
    }
}
////////////////////////////////////////////////////////////////////////
//
//1. Accept a no from user . display that number of even nos on screen.
//
///////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    printf("Enter a number\n");
    scanf("%d",&iValue);
    PrintEven(iValue);    
    return 0;
}