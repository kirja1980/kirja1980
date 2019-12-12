#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 1 

int comp(const void *a, const void *b)
{
    return (strcmp(*(char **)a, *(char **)b));
}

int main() {
    char text[1000];
    char sep[] = " .\n";
    char* temp;
    char** txt_wrd = (char**)malloc(size * sizeof(char *));
    char** str = (char **)malloc(sizeof(char *));
    str[0] = (char *)malloc(30);

    fgets(text, 1000, stdin);
    fgets(str[0], 30, stdin);
    temp = strtok(text, sep);

    int cont = size;
    while (temp != NULL)
    {
        txt_wrd[size - 1] = temp;
        txt_wrd = (char**)realloc(txt_wrd, ++ cont * sizeof(char *));
        temp = strtok(NULL, sep);
    }
    txt_wrd = (char**)realloc(txt_wrd, -- cont*sizeof(char*));

    qsort(txt_wrd, cont, sizeof(char *), comp);
    temp = (char*)bsearch(str, txt_wrd, cont, sizeof(char *), comp);

    printf("%s", (temp != NULL)?"exists":"doesn't exist");

} 
