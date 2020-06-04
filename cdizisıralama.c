#include <stdio.h>
int donustur(int a[], int n)
{
    int i, temp;
    for (i = 0; i < n; i++)
    {
        temp = a[i];
        a[i] = a[n - i];
        a[n - i] = temp;
        if (n % 2 == 0)
        {
            if (i == n / 2)
            {
                break;
            }
        }
        else
        {
            if (i == n / 2)
            {
                break;
            }
        }
    }
    for (i = 0; i <= n; i++)
    {
        printf("%d. index : %d\n", i, a[i]);
    }
}
int main()
{
    int i;
    int x[] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,14};
    int diziElemanSayisi = (sizeof x / sizeof *x);
    printf("\n---------------------oncesi-------------------\n");
    for (i = 0; i <= diziElemanSayisi - 1; i++)
    {
        printf("%d. index : %d\n", i, x[i]);
    }
    printf("\n--------------------sonrasi-------------------\n");
    donustur(x, diziElemanSayisi - 1);
    return 0;
}
