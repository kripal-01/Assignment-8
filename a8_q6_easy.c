// 6.
// *********
//  *******
//   *****
//    ***
//     *
int main()
{
    int i,j;
    for ( i = 1; i <= 5; i++)
    { 
        for ( j = 1; j <= 9; j++)
        {
            if(j<=10-i&&j>=i)
            printf("*");
            else
            printf(" ");
            /* code */
        }
        printf("\n");
    }
}