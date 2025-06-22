#include <stdio.h>

int main() 
{
    int n = 1;
    label:
    printf("%d\n", n);
    n += 1;

    if (n == 10) goto out;

    goto label;

    out:

    int m = 1;
    
    while (m < 3)
    {
        printf("%d\n",m);
        m += 1;
    }
}