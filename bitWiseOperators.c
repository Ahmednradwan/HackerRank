/**
 * @file bitWiseOperators.c
 * @author Ahmed N. Radwan (ahmed_n_radwan@hotmail.com)
 * @brief The below code uses bitwise operations and '&', or '|', and xor '^' betwen two numbers from
 * 1 to a givin number 'n' and then prints the maximum result for each operation that doesn't equal to or
 * exceeds a givin threshold 'k'. 
 * Example
 * n = 3
 * k = 3

The results of the comparisons are below:

a b   and or xor
1 2   0   3  3
1 3   1   3  2
2 3   2   3  1
For the and comparison, the maximum is 2. For the or comparison, none of the values is less than k,
so the maximum is 0. For the xor comparison, the maximum value less than k is 2. The function should print:

2
0
2
Function Description

Complete the calculate_the_maximum function in the editor below.

calculate_the_maximum has the following parameters:

int n: the highest number to consider
int k: the result of a comparison must be lower than this number to be considered
Prints

Print the maximum values for the and, or and xor comparisons, each on a separate line.

Input Format

The only line contains 2 space-separated integers, n and k
 * @version 0.1
 * @date 2023-08-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int andRslt=0;
  int orRslt=0;
  int xorRslt=0;
  for (int i = 1; i < n; i++)
  {
   for (int j = i+1; j <=n; j++)
   {
    int and=i&j;
    int or =i|j;
    int xor=i^j;
    ((and>andRslt)&&(and<k))?andRslt=and:andRslt;
    ((or>orRslt)&&(or<k))?orRslt=or:orRslt;
    ((xor>xorRslt)&&(xor<k))?xorRslt=xor:xorRslt;
   }
    
  }
  printf("%d\n%d\n%d\n",andRslt,orRslt,xorRslt);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
