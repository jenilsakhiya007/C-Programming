#include <stdio.h>
#include <string.h>

int main() {
    printf("Name :Jenil Sakhiya\n");
    printf("ID :25CE104\n\n");
    FILE *fp ;
    char word[100];
    fp = fopen("Test.txt", "r"); //File is alredy exist
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    while (fscanf(fp, "%s", word) != EOF) {

          int len = strlen(word);

         //reverse each word
         for (int i = 0; i <len/2; i++) {
             char temp = word[i];
             word[i] = word[len - 1 - i];     
             word[len - 1 - i] = temp;
         }

        printf("%s ", word);
    }

    fclose(fp);
    return 0;
}

