#include <stdio.h>
int main(void) {
    int x,b;
    printf("Oct(8) =>");
    scanf("%o",&x);
    printf("Dec(10) => %d\n", x);
    printf("Dec(10) => %d\n",  x >> 1);
    printf("Dec(10) => %d\n",  !x);
    printf("Oct(8) =>");
    scanf("%o",&b);
    printf("Oct(8) => %o", x^b);
    return 0;
}
