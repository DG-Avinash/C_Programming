#include<stdio.h>

float AdditionTowNumbers(float fNo1, float fNo2)
{
    float fSum = 0.0f;

    if(fNo1 < 0.0f)
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;     // Business logic

    return fSum;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f, fRet = 0.0f;

    printf("Enter first number :\n");
    scanf("%f",&fValue1);

    printf("Enter second number :\n");
    scanf("%f",&fValue2);

    fRet = AdditionTowNumbers(fValue1, fValue2);

    printf("Addistion is :%f\n",fRet);

    return 0;
}