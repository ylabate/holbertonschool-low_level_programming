#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i;
	int sum = 0;
	int target = 2772;
	char passwd[100];

	srand(time(NULL));

	for (i = 0; sum < target; i++)
	{
		passwd[i] = 33 + (rand() % 94);
		sum += passwd[i];

		if (sum >= target)
		{
			passwd[i] = target - (sum - passwd[i]);
			if (passwd[i] < 33)
				passwd[i] = 33;
			sum = target;
		}
	}

	passwd[i] = '\0';
	printf("%s\n", passwd);

	return (0);
}
