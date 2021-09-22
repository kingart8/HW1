#include <stdio.h>
#include <math.h>
#include <limits.h>
#define TRUE 1

int main() {
	unsigned int z = 0, k = 0, sum = 0;
	char c;

	printf("Enter binary number:  ");

	while ((c = getchar()) != '\n') {

		if (c == '-')
			z = TRUE;

		else if ((c == '0') || (c == '1')) {

			c -= '0';
			sum += (int)c * (int)pow(2, k);
			k++;
			if (sum > (UINT_MAX - 1)) {
				printf("The entered number is too large!");
				return -1;
			}
		}
		else {
			printf("Wrong number!");
			return -1;
		}
	};

	if (z == TRUE)
		sum *= (-1);
	printf("Decimal number:  %d\n", sum);

	return 0;
}