#include<stdio.h>
/////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Display
//  Description    :    It is used to accept a number , then validate condition and display Hello or Demo  to the main function. 
//  Input   :           int
//  Output  :           int
//  Author  :           Prathamesh D Joshi
//  Date    :           12/11/2024
//
////////////////////////////////////////////////////////////////////////
void Display(int iNo)
{
    int iValue = iNo;
    if(iNo<10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

////////////////////////////////////////////////////////////////////////
//
//3. Accept one no from user . print 'Hello' if No is less than 10 else display Demo on Console.
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