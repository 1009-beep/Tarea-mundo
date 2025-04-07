#include<stdio.h>
unsigned long long factorial(int n) {
    if (n == 0) {
        return 1; 
    } else {
        return n * factorial(n - 1);
    }
}
int main()
{
    int n;
    printf("Introduce un número entero: ");
    scanf("%d", &n);

    if (n < 0) 
    {
        printf("El factorial no está definido para números negativos.");
    } 
    else 
        printf("El factorial de %d es %lld", n, factorial(n));
    return 0;
}