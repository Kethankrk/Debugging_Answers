#include <stdio.h>
#include <string.h>

int check(char *string, int size)
{
    int i = 0;
    int j = size - 2;
    while (j >= 0)
    {
        if (string[i] != string[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int main()
{
    char string[100];
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    if (check(string, strlen(string)))
    {
        printf("The given string is a palindrome\n", string);
    }
    else
    {
        printf("The given string is not a palindrome\n", string);
    }
    return 0;
}