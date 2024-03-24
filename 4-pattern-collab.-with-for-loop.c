// Collab. four patterns using loop...
#include<stdio.h>
int main()
{
int row,col;

        for(row=1;row<=5;row++)
        {
            for(col=1;col<=5-row;col++)
            {
                printf(" ");
            }
            for(col=1;col<=row;col++)
            {
                printf("*");
            }

            printf("\t");

            for(col=1;col<=row;col++)
            {
                printf("*");
            }
            printf("\n");
        }

        printf("\n");

//__________________________________________________________________
        for(row=1;row<=5;row++)
        {
            for(col=1;col<=row-1;col++)
            {
                printf(" ");
            }
            for(col=row;col<=5;col++)
            {
                printf("*");
            }
            printf("\t");

            for(col=row;col<=5;col++)
            {
                printf("*");
            }
            printf("\n");
        }

return 0;
}


