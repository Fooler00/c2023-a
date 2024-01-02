#include<stdio.h>
int main()
{ int num;
    scanf("%u",&num);
    for(int i=2;i<num;i++){
        if(i==num-1){printf("%u is a prime.",num);
            break;}
        else if(num%i!=0)continue;
        else {printf("%u is not a prime.",num);
            break;}
    }return 0;
}
