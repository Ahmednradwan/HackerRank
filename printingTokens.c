/**
 * @file printingTokens.c
 * @author Ahmed N. Radwan (ahmed_n_radwan@hotmail.com)
 * @brief A Hackerrank challenge to print the tokens of any given input string
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

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    char delimiter[]={' ','.'};
    for (int i = 0; s!=NULL; i++)
    {
        s=strtok(i==0?s:NULL,delimiter);
        if(s!=NULL)
        {
            printf("%s\n",s);
        }
    }
    
    return 0;
}