#include<stdio.h>
#include<time.h>
int main()
{clock_t start,end;
    start=clock();
    printf("2 ");
    for(int i=3;i>=2&&i<=1000;i++) {
        for (int j = 2; j < i; j++) {
            if (j == i - 1)printf("%d ", i);
            else if (i % j != 0)continue;
            else break;
        }
    }end=clock();
    printf("\ntime=%f",((double)(end-start))/CLK_TCK);
    return 0;
}
