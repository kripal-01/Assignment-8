

// 19.

//   *****     *****  
//  *******   *******
// ********* *********
// ******Kripal*******
//  *****************
//   ***************
//    *************
//     ***********
//      *********
//       *******      
//        *****
//         ***
//          *

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for ( j = 0; j < 19; j++)
        {
            /* code */
            if (((2-i<=j)&&(j<=6+i))||((12-i<=j)&&(16+i>=j)))
            {
                printf("*");
                /* code */
            }
            else
            printf(" ");
            
        }
        printf("\n");
        
    }
    for(i=0;i<10;i++)
    {
    	
        for ( j = 0; j < 19; j++)
        {
            if(i==0&&j==6)
            printf("Kripal");   
            if(i==0&&j>=6&&j<=11)
            continue;
			/* code */
            if ((i<=j)&&(j<=18-i))
            {
                printf("*");
                /* code */
            }
            else
            printf(" ");
            
        }
        printf("\n");
        
    }

    /* code */
    return 0;
}
