#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*headers */
/**main - entry*/

int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/*try new codes*/
	m = n % 10;
	if (m > 5)
		printf("last digit 0f %d is %d is greater than 5\n", n, m);
	if (m == 0)
		printf("last digit 0f %d is %d is 0\n", n, m);
	if (m < 6 && m != 0)
		printf("last digit 0f %d is %d is less than 6 and not 0\n", n, m);
	return (0);
}
