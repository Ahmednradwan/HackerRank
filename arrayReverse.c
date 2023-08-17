#include<stdio.h>
#include<stdlib.h>

/*Reversing a given array*/

/*Constraints:
* 1 <= n <= 1000
* 1 <= arr[i] <= 1000*/

/*
Sample Input 0
6
16 13 7 2 1 12
 
Sample Output 0
12 1 2 7 13 16
==============================
==============================
Sample Input 1
7
1 13 15 20 12 13 2 

Sample Output 1
2 13 12 20 15 13 1
*/

int main()
{
    int n;  // number of the elements in the array
    scanf("%d",&n);
    int *arr= (int*)malloc((n)*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d",(arr+i));
    }
    
    for (int i = (n-1); i >=0 ; i--)
    {
        printf("%d ",*(arr+i));
    }
    
    free(arr);
    
    return EXIT_SUCCESS;
}