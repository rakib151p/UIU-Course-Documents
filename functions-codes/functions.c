#include <stdio.h>
#include<string.h>

// an example of function declaration
void mycustom_function(int, int);

// an example of function definition of the declared function
void mycustom_function(int i, int j)
{
    int sum = 0;

    sum = 2 * i++;
    printf("%d\n", sum);

    j++;
    sum = 2 * j--;
    printf("%d\n", sum);
}

int get_robot_move(char command)
{
    if (command == 'f')
    {
        return 1;
    }
    else
        return 2;
}

void is_palindrome(char s[])
{
    int i = 0;
    
    char original_string[1000];
    strcpy(original_string, s);
    
    strrev(s);
    puts(original_string);

    if(strcmp(original_string, s) == 0)
    {
        puts(s);
        printf("PALINDROME");
    }
    else 
    {
        printf("NOT A PALINDROME");
    }
    
    
}



int main()
{
    mycustom_function(10, 12);            // does not return anything, takes two input
    int robot_move = get_robot_move('F'); // F is for forward
    printf("%d", robot_move);

}