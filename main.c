#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,j,i,n1;
    scanf("%d",&n);
    /*n1=n;*/
/*    for(j=(2*n)-1;j>0;j--)
    {
      for(i=n;i>=1;i--)
        {
            printf("% d",n1--);
        }
      n1++;
      for(i=1;i<n;i++)
        {
            n1++;
            printf("% d",n1);
        }
    }*/
    for (i=0;i<n;i++)
    {
        /*printf("% d",n);*/
        for(j=0;j<n;j++)
        {
            if (j<=i)
            n1=n-j;
            printf("%3d",n1);
        }
        printf("\n");
    }

    return 0;
}
