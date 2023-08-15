#include <stdio.h>

void add_matrices(int M1[2][2], int M2[2][2]);

void print_array(float num[], int length)
{

    for (int i = 0; i < length; ++i)
    {
        printf("%f\n", num[i]);
    }
}

float find_average(float marks[], int length)
{
    float sum = 0.0;

    for (int i = 0; i < length; i++)
    {
        sum += marks[i];
    }

    float average = sum / length;

    return average;
}

void display_matrix(int num[2][2])
{
    printf("Displaying:\n");
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            printf("%d ", num[i][j]);
        }

        printf("\n");
    }
}

void add_matrices(int M1[][2], int M2[][2])
{
    int result[2][2];

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            result[i][j] = M1[i][j] + M2[i][j];
        }

    }

    display_matrix(result);
}

int main()
{
    float array[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    int length = sizeof(array) / sizeof(float);
    printf("%lf", find_average(array, length));

    
    int num[2][2];

    printf("\nEnter 4 numbers:\n");
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            scanf("%d", &num[i][j]);
        }
    }

    add_matrices(num, num);


}
