/*
    Step 1 : Understand the problem statement
    Step 2 : Write the Algorithm
    Step 3 : Decide the proramming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/*
    Algoritm
        START
            Accept first number as No1
            Accept second number as No2
            perform Addition of No1 & No2
            Display the Addition on screen
        STOP
*/

#include<stdio.h>

float AdditionTwoNumbers(float fNo1, float fNo2)
{
float fSum = 0.0f;
fSum = fNo1 + fNo2;
return fSum;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f, fRet = 0.0f;

    printf("Enter first number :\n");
    scanf("%f",&fValue1);

    printf("Enter second number :\n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1, fValue2);

    printf("Addition is :%f\n",fRet);

    return 0;
}