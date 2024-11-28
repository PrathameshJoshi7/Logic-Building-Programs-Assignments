#include<stdio.h>
/////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Display
//  Description    :    It is used to accept 2 numbers , then validate condition and display the first number in second number of times. 
//  Input   :           int,int
//  Output  :           int
//  Author  :           Prathamesh D Joshi
//  Date    :           12/11/2024
//
////////////////////////////////////////////////////////////////////////
void Display(int iNo,int iFrequency)
{
    int iValue = iNo;
    int iCount = iFrequency;
    int iCnt = 0;
    for(iCnt = 0;iCnt<iFrequency;iCnt++)
    {
        printf("%d\t",iNo);
    }
    

}

////////////////////////////////////////////////////////////////////////
//
//4. Accept two nos from user . print first number in second number of times on Console.
//
///////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter a number");
    scanf("%d",&iValue);
    printf("Enter a frequency");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}
