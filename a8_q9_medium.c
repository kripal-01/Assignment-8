// 9.
// 1234321
//  12321
//   121
//    1
#include<stdio.h>
int main()
{
    int i,j,k;
    for ( i = 1; i <= 4; i++)
    { k=1;
        for ( j = 1; j <=7; j++)
        { 
         if (j>=i&&j<=8-i)
         { if (j<=4)
         {
              printf("%d",k++);
            /* code */
         }
         else
         {
         printf("%d",k-2);
         k--;
         }
         
          
            /* code */
         }
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
