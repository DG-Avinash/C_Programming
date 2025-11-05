#include<stdio.h>

int main()
{
    int i = 0, j =0, ans = 0;

    printf("Enter first number :\n");
    scanf("%d",&i);

    printf("Enter second number :\n");
    scanf("%d",&j);

    ans = i + j;     // Business logic

    printf("Additio is : %d\n", ans);

    return 0;
}