/*
    Step 1 : Understand the problem statement
    Step 2 : Write the Algorithm
    Step 3 : Decide the proramming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

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
    float fSum = 0.0f;

    // Updator
    if(fNo1 < 0.0f)
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;        // Business logic

    return fSum;
}

//////////////////////////////////////////////////////////////////
//
//  Entry point function for the Application
//
//////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f, fRet = 0.0f;

    printf("Enter first number : \n");
    scanf("%f",&fValue1);

    printf("Enter second number : \n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);

    printf("Adddition is : %f\n",fRet);

    return 0;
}

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