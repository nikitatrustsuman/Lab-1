#include <stdio.h>
int main() {
    int a, b, sa, sg;

    printf("Введіть число a: ");
    scanf("%d", &a);
    printf("Введіть число b: ");
    scanf("%d", &b);
    sa = a + b /2;
    printf("\t%d sa, \n", sa);
    sg = sqrt(a * b);
    printf("\t%d sg, \n", sg);

    return 0;
}