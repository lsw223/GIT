#include <stdio.h>

int factorial(int n){
	if(n==1)
		return 1;
	return n*factorial(n-1);
}

void DecToBinary(int n){
	if(n < 2) printf("%d",n);
	else{
		DecToBinary(n/2);
		printf("%d",n%2);
	}
}

int main(void){
	printf("5! = %d\n",factorial(5));
	DecToBinary(12);
	printf("\n");
	DecToBinary(175);
	printf("\n");
	return 0;
}
