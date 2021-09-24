#include <stdio.h>
#include <math.h>
#include <limits.h>
#define TRUE 1

int main() {
	long long  sum = 0, k = 0;
	int z = 0;
	char c, mas[CHAR_MAX];

	printf("Enter binary number:  ");

	while ((c = getchar()) != '\n') {

		if (c == '-')
			z = TRUE;

		else if ((c == '0') || (c == '1')) {

			c -= '0';
			mas[k++] = c;
			if (k > (CHAR_MAX - 1)) {
				printf("\nThe entered number is too large!\n");
				return -1;
			}
		}
		else {
			printf("\nWrong number!\n");
			return -1;
		}
	};

	for (long long i = 0; i < k; i++) {
		sum += (long long)(mas[i]) * (long long)pow(2, k - i - 1);
		if (sum > (LLONG_MAX - 1)) {
			printf("\nThe entered number is too large!\n");
			return -1;
		}
	}

	if (z == TRUE)
		sum *= (-1);

	printf("\nDecimal number:  %lld\n", sum);

	return 0;
}