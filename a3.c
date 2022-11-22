#include<stdio.h>

int main()
{
    int age;
    printf("Enter Your age:\n");
    scanf("%d",&age);

    if (age<18)
    {
        printf("you cannot vot.\n");
    }
    else if (age=18)
    {
        printf("You can vote\n");
    }
    else
    {
        printf("We don't know.");
    }
    
    
    
    return 0;
}
