#include <stdio.h>
 
void printEgyptian(int a, int b)
{
    if (b == 0 || a == 0)
        return;
 
    if (b%a == 0)
    {
        printf("%d", b/a);
        return;
    }
 
    if (a%b == 0)
    {
        printf("%d ", a/b);
        return;
    }
 
    if (a > b)
    {
        printf("%d ", a/b);
        printEgyptian(a%b, b);
        return;
    }
 
    int n = b/a + 1;
    printf("%d ", n);
 
    printEgyptian(a*n-b, b*n);
 }
 
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printEgyptian(a, b);
    return 0;
}