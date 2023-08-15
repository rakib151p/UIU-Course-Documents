#include <stdio.h>

int main(){
    char s = 'm';
    char t = 'z' - 'a';
    // --> int res = ascii(z) - ascii(y)
    // char t = (char) res
    printf("%d\n", s); // ascii(m)
    printf("%c\n", s); // m
    printf("%c\n", (s+1)); // n
    printf("%d\n", (s+1)); // ascii(n)
    printf("%c\n", t);

    return 0;
}