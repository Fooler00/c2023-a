#include <stdio.h>
#include <math.h>

#define N 100
void SeparateEven(int n);
void prime(int n);
int isPrime[N+1];
int main()
{
    printf("4 = 2 + 2\n");
    int a=2, b=N;
    prime(N);
    for(int i = a; i <= b; i += 2)
        SeparateEven(i);
    return 0;
}
void SeparateEven(int n)
{
    for (int i = 3; i <= n/2; i ++)
        if (isPrime[i] && isPrime[n-i])
        {
            printf("%d = %d + %d\n", n, i, n-i);
            break;
        }
}
void prime(int n)
{
    for (int i = 0; i <= n; i ++)
        isPrime[i] = 1;

    isPrime[0] = isPrime[1] = 0;
    int temp = (int)sqrt(n);

    for (int i = 2; i <= temp; i ++)
        if (isPrime[i])
            for (int j = 2*i; j <= n; j += i)
                isPrime[j] = 0;
}
