#include <stdio.h>
int main()
{
    int c[2][3] = {1,2,3,4,5,6};
    for (int a =0;a<2;a++)
    {
        for(int b=0;b<3;b++)
        {
            printf("%d ",c[a][b]);
                if (b == 2)
                {
                printf ("\n");
                }
        }
    }
}