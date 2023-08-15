#include<stdio.h>

int main(){
    char str_a[100] = "Hello";
    char str_b[] = "hello";
    char str_c[] = {'c', 'o', 'd', 'e', '\0'};

    printf("%c", str_a[2]);
    printf("%s", str_a);
    puts(str_c);

    char str_n[50];
    gets(str_n);
    puts("newly taken string as input");
    puts(str_n);

    int i = 0;

    while (str_a[i]!='\0'){
        i++;
    }
    printf("%d", i);

}
