#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    printf("Name : Jenil Sakhiya\n");
    printf("ID :25CE104\n\n");
    char *artical, c;
    int size = 2;
    int len = 0;
    artical = (char *)calloc(size, sizeof(char));
    if (artical == NULL)
    {
        printf("Memory allocation failed !\n");
        return 1;
    }
    while ((c = getchar()) != EOF)
    {
        artical[len++] = c;
        if (len == size)
        {
            size *= 3;
            artical = (char *)realloc(artical, size * sizeof(char));
            if (artical == NULL)
            {
                printf("Memory Realaction failed !");
                return 1;
            }
        }
    }
    artical[len] = '\0';
    printf("\nYour Paragraph is :\n %s", artical);
    free(artical);
    return 0;
}
