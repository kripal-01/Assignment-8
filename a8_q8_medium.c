// 8.
//    1   
//   121
//  12321
// 1234321
#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 4; i++)
    {
        k = 1;
        for (j = 1; j <= 7; j++)
        {
            if (j > 4 - i && j < 4 + i)
            {
                if (j <= 4)
                    printf("%d", k++);
                else
                {
                    printf("%d", k - 2);
                    k--;
                }
            }
            else
                printf(" ");
            /* code */
        }
        printf("\n");
    }
}



//#include <stdio.h>
//int main()
//{
//    int i, j, k;
//    for (i = 1; i <= 4; i++)
//    {
//        k = 1;
//        for (j = 1; j <= 4-i; j++)
//        {
//           printf(" ");
//        }
//        for (j = 1; j <= i; j++)
//        {
//           printf("%d",k++);
//        }
//        k-=2;
//        while(k)
//        {
//        	printf("%d",k--);
//		}
//        printf("\n");
//    }
//}
//

