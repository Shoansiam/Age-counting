#include<stdio.h>

int main()
{
    printf("enter your exam number and take reward.\n");

    int num;
    printf("enter your exam marks");
    scanf("%d",&num);

    switch (num)
    {
    case 50:
        printf("Your price is 100 taka");
        break;
    case 70:
        printf("Your price is 200 taka");
        break;
    case 90:
        printf("Your price is 300 taka");
        break;
    
    default:
           printf("You are so brilliant or not.");
        break;
    }
    return 0;
}
