#include <stdio.h>
#include <stdlib.h>

int ft_plus(int left, int right);

int main(int argc, char *argv[])
{
	int result = 0;
	int left;
	int right;

	if (argc != 4)
	{
		printf("Usage : \"./cal a + b\"\n");
		return (1);
	}

	// from here, right fommat is received
	left = atoi(argv[1]);
	right = atoi(argv[3]);

	if (argv[2][0] == '+')
		result = ft_plus(left, right);
	//else if (argv[2][0] == '*')
		//result = ft_multi(left, right);

	printf("result: %d\n", result);

	return (0);
}
