#include <stdio.h>
int main()
{
    int n;
    printf("Nhap so nguyen n vao: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("n la so chan");
    }
    else
    {
        printf("n la so le");
    }
    return 0;
}