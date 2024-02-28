#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("data.txt", "a");
    char buffer[100];

    if (file == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    for (int i = 1; i <= 5; i++)
    {
        fprintf(file, "%d", i);
    }

    file = fopen("data.txt", "r");

    while (fscanf(file, "%s", buffer) != EOF)
    {
        printf("%s\n", buffer);
    }

    fclose(file);

    return 0;
}