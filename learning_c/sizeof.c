#include<stdio.h>
int main(){
	printf("int size: %ld\n", sizeof(int));
	printf("float size: %ld\n", sizeof(float));
	printf("double size: %ld\n", sizeof(double));
	printf("char size: %ld\n", sizeof(char));
	printf("long size: %ld\n", sizeof(long));
	/*
	 *I can also use the size of operator for a variable lik this
	 */
	int number = 30;
	printf("the size of my variable is %lu bytes", sizeof (number));
	return 0;
}
