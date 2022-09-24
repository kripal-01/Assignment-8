// Assignment - 8 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// Pattern Problems
// Write a program to draw the following patterns:
// 1.
// *    
// **   
// ***  
// **** 
// *****
#include<stdio.h>
int main()
{
    int i,j;
    for ( i = 0; i < 5; i++)
    { 
        for ( j = 0; j < 5; j++)
        {
            if(j<=i)
            printf("*");
            else
            printf(" ");
            /* code */
        }
        printf("\n");
        
        /* code */
    }
    
    /* code */
    return 0;
}
