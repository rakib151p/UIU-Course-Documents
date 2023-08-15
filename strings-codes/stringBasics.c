#include <stdio.h>

int main(){

    char str_a[] = "Hello";
    char str_b[5] = "Hello";
    char str_c[] = {'c', 'o', 'd', 'e', '\0'};

    printf("%s\n", str_a);
    printf("%c\n", str_b[0]);
    puts(str_c);

    // these help to take input without interruption. Only stops when a new line is given as input4
    char str[100];
    gets(str);
    puts(str);


}