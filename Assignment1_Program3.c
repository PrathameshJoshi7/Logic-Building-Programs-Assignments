#include<stdio.h>
/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description    :    It is used to display numbers 5 to 1. 
//  Input   :           int
//  Output  :           int
//  Author  :           Prathamesh D Joshi
//  Date    :           12/11/2024
//
////////////////////////////////////////////////////////////////////////

void Display()
{
    int i = 0;
    i = 5;
        while(i >0)
        {
            printf("%d",i);
            i--;
        }
}

////////////////////////////////////////////////////////////////////////
//
// 3.Print 5 to 1 numbers on Console.
//
///////////////////////////////////////////////////////////////////////

int main()
{   
    Display();
    return 0;
}