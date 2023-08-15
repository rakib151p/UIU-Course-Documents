#include <stdio.h>

int main(){
    char s1[100] = "hello ";
    char s2[100] = "world";
    
    char result[300] = "";

    int i = 0;
    int k = 0;

    // copying the string to the result string
    while (s1[i]!='\0'){

        result[k] = s1[i]; // h , e, l, l , o
        i++;
        k++;

    }

    int j = 0;
    while (s2[j]!='\0'){

        result[k] = s2[j];
        j++;
        k++;

    }

    // you have to put a null at the end of the new string
    result[k] = '\0';

    puts(result);
}
