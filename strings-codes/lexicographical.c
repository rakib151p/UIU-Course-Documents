#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size


int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];

    /* Input two strings from user */
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);


    int i = 0;

    /* Iterate till both strings are equal */
    while(str1[i] == str2[i])
    {
        if(str1[i] == '\0' && str2[i] == '\0')
            break;

        i++;
    }

    int res = str1[i] - str2[i];

    if(res == 0)
    {
        printf("Both strings are equal.");
    }
    else if(res < 0)
    {
        printf("First string is lexicographically smaller than second.");
    }
    else
    {
        printf("First string is lexicographically greater than second.");
    }

    return 0;
}

