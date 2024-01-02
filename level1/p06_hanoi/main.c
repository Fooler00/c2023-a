#include <stdio.h>

void move(char A,char C)
{
	printf("%c->%c\n",A,C);
}

void hanoi(int n,char A,char B,char C)
{
	if (n==1) {	
    	move(A,C);
	}else {   
	    hanoi(n-1,A,C,B);
	    move(A,C);
	    hanoi(n-1,B,A,C);
	}
}
int main( ) {	
	int n;
	
	printf("input number:");
	scanf("%d",&n);
	printf("the steps to move %2d diskes:\n",n);
	hanoi(n,'a','b','c');   
	return 0;
}
