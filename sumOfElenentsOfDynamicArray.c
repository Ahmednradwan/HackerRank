#include<stdio.h>
#include<stdlib.h>

/*In this challenge it is required to create a dynamic array using malloc function.
*the number of the elements of the array is to entered by the user in run time.
*Also the array elements will be entered by the user then the sum will be calculated
*and the memory is to be deallocated using free (arr)*/

/*Constraints:
* 1 <= n <= 1000
* 1 <= arr[i] <= 1000*/

/*
Sample Input 0
6
16 13 7 2 1 12
 
Sample Output 0
51
==============================
==============================
Sample Input 1
7
1 13 15 20 12 13 2 

Sample Output 1
76
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
    
    int sum;
    for (int i = 0; i < n; i++)
    {
        sum+=*(arr+i);
    }
    printf("%d",sum);
    free(arr);
    
    return EXIT_SUCCESS;
}