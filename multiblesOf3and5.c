#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int sum (int noOftstCase,...){
    int sum = 0;
    va_list input;
    return sum;
}

int main(){
    int t; 
    scanf("%d",&t);
    int ansr[t];
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
        int sum=0;
        for(int i=0;i<n;i++){
        if ((i%3==0)||(i%5==0))
        {
            sum+=i;
        }
        }
        ansr[a0]=sum;
        
    }
    for (int i = 0; i < t; i++)
    {
        printf("%d\n",ansr[i]);
    }
    
    return 0;
}