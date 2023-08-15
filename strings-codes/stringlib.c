#include<string.h>
#include <stdio.h>

int main()
{
    //--------- string length ---------
    char a[20]="Hello";
    char b[20]="World";

    puts("-----string length example-----");
    printf("Length of string a =  %d \n",strlen(a));
    printf("Length of string b =  %d \n\n",strlen(b));
    puts("\n");

    //--------- string copying ---------

    puts("-----string copying example-----");
    char str1[20] = "I love strings";
    char str2[20];

    // copying str1 to str2
    strcpy(str2, str1);

    puts(str2);
    printf("\n\n");


    //--------- string concatenation ---------

    puts("-----string concatenation example-----");
    char stra[100] = "This is ", strb[] = "really fun!";

    // concatenates str1 and str2
    // the resultant string is stored in str1.
    strcat(stra, strb);

    puts(stra);
    puts(strb);
    printf("\n\n");

    //--------- string comparison ---------
    puts("-----string comparison example-----");
    char str3[] = "abcd", str4[] = "abCd", str5[] = "abcd";
    int result;

    // comparing strings str3 and str4
    result = strcmp(str3, str4);
    printf("strcmp(str3, str4) = %d\n", result);

    // comparing strings str4 and str5
    result = strcmp(str4, str5);
    printf("strcmp(str4, str5) = %d\n", result);
    
    // comparing strings str3 and str5
    result = strcmp(str3, str5);
    printf("strcmp(str3, str5) = %d\n", result);

    puts("\n\n");

    //---------- string reverse ------------
    puts("-----string reversal example-----");
    char str_main[] = "This class is really tedious";
    char str_reversed[] = "";
    strcpy(str_reversed, strrev(str_main));
    puts(str_reversed);

}