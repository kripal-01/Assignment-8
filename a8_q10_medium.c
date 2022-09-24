// 10.
// 1234321
// 123 321
// 12   21
// 1     1
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {

        for (j = 1; j <= 7; j++)
        {
            if (j <= 5 - i || j >= 3 + i)
            {
                if (j <= 4)
                {
                    printf("%d", j);
                    /* code */
                }
                if (j > 4)
                {
                    printf("%d", 8 - j);
                    /* code */
                }

                /* code */
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}