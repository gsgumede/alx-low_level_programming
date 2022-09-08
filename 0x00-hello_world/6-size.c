#include<stdio.h>
/*
 * main -Prints out the sizes of varous data types on the standard output
 * Return:0 if sucess.
 */
int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;
	printf("Size of char: %tu byte(s)\n",(unsigned long)sizeoff(c));
	printf("Size of char: %tu byte(s)\n",sizeoff(i));
	printf("Size of char: %tu byte(s)\n",sizeoff(l));
	printf("Size of char: %tu byte(s)\n",sizeoff(ll));
	printf("Size of char: %tu byte(s)\n",sizeoff(f));
	return (0);
}

