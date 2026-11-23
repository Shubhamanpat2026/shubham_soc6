/*
 * Count the Number of Lines in a Text File
 * Count the number of lines in a text file (text.txt).
 */
#include <stdio.h>

int main()
{
    FILE *file;
    int ch;
    int lines = 0;

    file = fopen("text.txt", "r");
    if (file == NULL)
    {
        printf("Unable to open the file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF)
    {
        if (ch == '\n')
        {
            lines++;
        }
    }

    fclose(file);

    printf("Number of lines in the file = %d\n", lines);

    return 0;
}
