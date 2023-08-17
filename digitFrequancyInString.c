/**
 * @file digitFrequancyInString.c
 * @author Ahmed N. Radwan (ahmed_n_radwan@hotmail.com)
 * @brief The following code is implemented to find how many each digit from 0 to 9 ia repeated
 *        in a given string.
 *        Ex.:
 *        Input string   : lw4n88j12n1
 *        Expected output: 0 2 1 0 1 0 0 0 2 0
 *        as 0 repeated 0 times in the string and 1 repeated twice and 2 repeated 1 time etc..
 * @version 0.1
 * @date 2023-08-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char *s;
    s = malloc(1024*sizeof(char));
    scanf("%[^\n]",s);
    s = realloc(s,strlen(s)+1);
    char *sPtr=s;
    for (char digit = '0'; digit <= '9'; digit++)
    {
        int founds=0;
        do//for (char strIndx = 0; strIndx < strlen(s); strIndx++)
        {
            sPtr=strchr(sPtr,digit);
            if (sPtr)
            {
                founds++;
                sPtr++;
            }
        }while(sPtr);
        //printf("%d\n",digit);
        printf("%d ",founds);
        sPtr=s;
    }
    
    return 0;
}