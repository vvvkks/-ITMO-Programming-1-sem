#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdio.h>
int main() {
    printf("%s\n", "task1");
    char str1[100];
    char str2[100];
    scanf("%s %s", str1, str2);
    strcat(str1, str2);
    printf("%s\n\n", str1);

    printf("%s\n", "task4");
    if (strncmp(str1, str2, 3) == 0)
        puts("the first\n");
    else
        puts("ttt\n");


    printf("%s\n", "task7");
    char string[100];
    printf("%s\n", "enter");
    scanf("%s", string);

    int size = strlen(string);
    printf("%s\n", "size");
    printf("%i\n\n", size);

    printf("%s\n", "task8");
    char c;
    scanf("%c", &c);
    char *ss = strchr(str1, c);
    printf("\n Finding the symbol -> %o\n\n", ss);


    char str11[11] ="0123456789";

    char str22[10] ="345";

    char *istr;


    istr = strstr(str11, str22);


    if (istr == NULL)
        printf("str not found\n");
    else
    printf("your finded str starts from %d\n",istr - str11 + 1);
}