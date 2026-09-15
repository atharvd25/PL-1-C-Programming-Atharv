// Program(11)-> Writen a program to check wheather given number is even or odd.

#include <stdio.h>

int main()
{
    int num;
    printf("Enter your number.");
    scanf("%d", &num);
    
    if(num%2==0)
    {
        printf("The number is Even");

    }
    else 
    {
        printf("The number is Odd.");
    }
    return 0;
    }
