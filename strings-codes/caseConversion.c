#include <stdio.h>   
int main ()  
{  
    char upper, lower;  
    int ascii;  
      
    // convert to lower case  
    printf(" Enter the Upper Case Character: ");
    scanf(" %c", &upper);
    ascii = upper + 'a' - 'A';
    printf (" %c character in Lower case is: %c", upper, ascii);
      
    // convert to upper case  
    printf(" \n Enter the Lower Case Character: ");
    scanf(" %c", &lower);
    ascii = lower - ('a' - 'A');
    printf (" %c character in the Upper case is: %c", lower, ascii);
      
    return 0;  
}  