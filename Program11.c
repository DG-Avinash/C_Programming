/*
    Algorith

    START
        Accept first number as No1
        Accept second number as No2
        If the input is negative then convert it into positive
        Perform Addition of No1 & No2
        Display the Addtion on screen
    STOP
*/

//////////////////////////////////////////////////////////////////
//
//  Required Header file
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name : AdditionTwoNumbers
//  Description   : It is used to perform Addtion
//  Input         : Float, Float
//  Output        : Float
//  Auther        : Avinash Arjun Kanherkar
//
//////////////////////////////////////////////////////////////////

float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0.0f;       // To store the result

    if(fNo1 < 0.0f)          // Updator
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f)          // Updator
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;     // Business logic

    return fSum;
}                           // End of AddiotionTwoNumbers

//////////////////////////////////////////////////////////////////
//
//  Entry point function for the Application
//
//////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;  // To accept user input

    float fRet = 0.0f;    // To store the result

    printf("Enter first number : \n");
    scanf("%f",&fValue1);

    printf("Enter second number : \n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);        // Method call

    printf("Adddition is : %f\n",fRet);

    return 0;
}                         // End of main

//////////////////////////////////////////////////////////////////
//
//  Testcases successfully handaled by the Applicatio
//  Input : 10.5    Input : 3.2     Output : 13.7
//  Input : -10.5   Input : 3.2     Output : 13.7
//  Input : 10.5    Input : -3.2    Output : 13.7
//  Input : -10.5   Input : -3.2    Output : 13.7
//  Input : 10.5    Input : 0.0     Output : 13.7
//
//////////////////////////////////////////////////////////////////