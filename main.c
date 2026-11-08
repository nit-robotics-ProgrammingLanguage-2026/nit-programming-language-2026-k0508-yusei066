#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    if  (n < 0)
        printf("Error");
    else if (n == 0)
        printf("No");
    else if (n % 105 == 0)
        printf("UpGo!!");
    else if (n % 35 == 0)
        printf("Go!!");
    else if (n % 21 == 0)
        printf("Up!!");
    else if (n % 15 == 0)
        printf("UpGo");
    else if (n % 7 == 0)
        printf("!!");
    else if (n % 5 == 0)
        printf("Go");
    else if (n % 3 == 0)
        printf("Up");
    else
        printf("No");
    return 0;
}
