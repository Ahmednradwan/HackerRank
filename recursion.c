#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*The following code is dedecated to find the Nth item in a series.
*Given the series starting 3 items a,b,and c, the S(n) = S(n-1)+S(n-2)+S(n-3).
*Using a recursive function, it is required to calculate S(n) at a givin n position.
*/

/*The following steps show the algorithem used to develop the recursive function
*Step1: Defining the base case
*==============================
*It is important to will define the base case as it is considered to be the exit
*from the recursion process. Otherwise the program will go into an infinite loop
*and crashe.
*Here the base case is:
*f(n) = a + b + c    when n = 4

*Step2: Developing the case which is one step away from the base case
*=====================================================================
*In this case it will be  2 steps:
f(n)= b+c+f(n-1)      when n = 5
f(n)=c+f(n-1)+f(n-2)  when n = 6

*Step3: Developing the more general case
*========================================
*f(n)=f(n-1)+f(n-2)+f(n-3)  when n > 6

For Example: S = {1 , 2 , 3 , 6 , 11 , 20 , 37 , ...}.
*/

int find_nth_term(int n, int a, int b, int c) 
{
  if (n<5)
  {
    return a+b+c;
  }
  else if (n<6)
  {
    return b+c+find_nth_term(n-1,a,b,c);
  }
  else if (n<7)
  {
    return c+find_nth_term(n-1,a,b,c)+find_nth_term(n-2,a,b,c);
  }
  else
  {
    return find_nth_term(n-1,a,b,c)+find_nth_term(n-2,a,b,c)+find_nth_term(n-3,a,b,c);
  }
}

int main()
{
  int n, a, b, c;
  
  scanf("%d %d %d %d", &n, &a, &b, &c);
  int ans = find_nth_term(n, a, b, c);
 
  printf("%d", ans); 
  return 0;
}