#include <stdio.h>
 
int main()
{
	char string[] = "Hello GHCI";
	int i, count = 10;

	/* Print string "Hello_GHCI" count times */
	for(i = 0; i < count; i++)
		printf("%s\n", string);

	return 0;
}

