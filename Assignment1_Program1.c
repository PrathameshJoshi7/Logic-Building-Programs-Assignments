#include<stdio.h>
/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Divide
//  Description    :    It is used to divide 2 integer values
//  Input   :           int, int
//  Output  :           int
//  Author  :           Prathamesh D Joshi
//  Date    :           12/11/2024
//
////////////////////////////////////////////////////////////////////////

int Divide(int iNo1,int iNo2)
{
    int iAns = 0;
    if(iNo2 ==0)
    {
        return -1;
    }
    iAns = iNo1/iNo2;
    return iAns;
}
////////////////////////////////////////////////////////////////////////
//
// 1.Program to divide two numbers
//
///////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;
    iRet = 0;
    iRet = Divide(iValue1,iValue2);
    printf("Division is %d",iRet);
    return 0;
}