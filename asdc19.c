/*
Program (19)-> Write a program to accept the element of one dimensional array and calculate the sum of all elements.
Solution(1)-> Using for loop
*/

#include <stdio.h>
int main()
{
    int arr[5],i,sum=0;
    for(i=0;i<5;i++)
    {
        printf("Enter elementof index %d:",i);
        scanf("%d",&arr[i]);

    }

    for(i=0;i<5;i++)
    {
        sum = sum+arr[i];

    }

    printf("\nSum of all array elements= %d",sum);
    return 0;

}

