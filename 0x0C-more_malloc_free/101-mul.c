#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int num1, num2;

    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Error\n");
            return (98);
        }
    }

    for (int i = 0; argv[2][i] != '\0'; i++)
    {
        if (!isdigit(argv[2][i]))
        {
            printf("Error\n");
            return (98);
        }
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    printf("%d\n", num1 * num2);

    return (0);
}

