#include<stdio.h>
/////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    DisplayFactor
//  Description    :    It is used to accept a number , then validate condition,Calculate even factors of that number and display them accordingly. 
//  Input   :           int
//  Output  :           int
//  Author  :           Prathamesh D Joshi
//  Date    :           12/11/2024
//
////////////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int i = 0;
    if(iNo<0)
    {
        iNo= -iNo;

    }
    for(i = 1; i<= iNo; i++)
    {
        if(iNo%i==0 && i%2==0 )
        {
            printf("%d\t",i);
        }
    }
}

////////////////////////////////////////////////////////////////////////
//
//2. Accept a no from user . display even factors of that no. on the screen.
//
///////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    printf("Enter number \n");
    scanf("%d",&iValue);
    DisplayFactor(iValue);
    return 0;
}