// 15.
// 15.
//     *
//    **
//   * *
//  *  *
// *****

#include <stdio.h>
int main()
{
    int i, j ;
    for (i = 1; i <= 5; i++)
    {
       
        for (j = 1; j <= 5; j++)
        {
            if (j==6-i||j==5||i==5)
           printf("*");
            else
                printf(" ");
            /* code */
        }
        printf("\n");
    }
}