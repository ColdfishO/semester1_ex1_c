#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    for(int i=1;i<=120;i++)
        printf("*");
    printf("\n");
    char nazwa[]="Simon Dudek";
    int x = strlen(nazwa);
    int d = 1;
    int b = 60 - (x/2);
    while (d <= b) {
        printf(" ");
        d += 1;
    }
    printf("%s\n", nazwa);
    for (int i = 1;i <= 120;i++)
        printf("*");
    printf("\n \n \n");
    for (int i = 1;i <= 120;i++)
        printf("*");
    d = 1;
    b = 120 - x;
    while (d <= b) {
        printf(" ");
        d += 1;
    }
    printf("%s\n", nazwa);
    for (int i = 1;i <= 120;i++)
        printf("*");
    system("pause");
    return 0;
}
