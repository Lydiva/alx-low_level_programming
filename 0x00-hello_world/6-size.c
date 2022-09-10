# include <stdio.h>

/**
 * main - Prints the size of many var types
 *
 * Return: Always 0 (successful)
 */
int main(void)
{
	char a;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of a char: %ld byte(s)\n", sizeof(a));
	printf("size of an int: %ld byte(s)\n", sizeof(i));
	printf("size of a long int: %ld byte(s)\n", sizeof(li));
	printf("size of a long long int: %ld byte(s)\n", sizeof(lli));
	printf("size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
