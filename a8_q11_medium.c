// 11.
//              A
//           A  B  A
//        A  B  C  B  A
//     A  B  C  D  C  B  A
//  A  B  C  D  E  D  C  B  A
 #include<stdio.h>
int main()
{
    int i,j;
    char k;
    for ( i = 1; i <= 5; i++)
    { 
        k='A';
        for ( j = 1; j <= 9; j++)
        {
            if(j>5-i&&j<5+i){
                if(j<=5)
            printf(" %c ",k++);
            if(j>=5)
            {
                printf(" %c ",k-2);
                k--;
            }
            }
            else
            printf("   ");
            /* code */
        }
        printf("\n");
    }
}