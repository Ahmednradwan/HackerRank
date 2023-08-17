#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    int row=0;
    int colmn=0;
    int result;
    scanf("%d", &n);
    for (row =0;row<n; row++)
    {
        //printf("%d",n);
        for (colmn = 0; colmn <= ((n*2)-2); colmn++)
        {
            if (colmn<=row)
            {
                result=n-colmn;
                printf("%d ",result);
            }
            else if(colmn>=((n*2)-(row+1)))
            {
                printf("%d ",++result);
            }
            else
            {
                printf("%d ",result);
            }
            
        }
        printf("\n");
    }
    for (row = n; row <= ((n*2)-2); row++)
    {
        for (colmn = 0; colmn <= ((n*2)-2); colmn++)
        {
           if(colmn<=(((n*2)-2)-row))
           {
            result=n-colmn;
            printf("%d ",result);
           }
           else if(colmn>row)
           {
            printf("%d ",++result);
           }
           else
           {
            printf("%d ",result);
           }
            
        }
        printf("\n");
    }
    
  	// Complete the code to print the pattern.
    return 0;
}