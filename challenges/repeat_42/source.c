#include <stdio.h>

int main()
{
	int i = 1;
	int inp;

	while (i <= 1000)
	{
		inp = 0;
		printf("[%d/1000] Enter 42: ", i);
		scanf("%d", &inp);
		if (inp != 42)
			break;
		i++;
	}
	if (i == 1001)
		printf("42{r3p3t1t10n_15_k3y_t0_succ3ss}\n");
	return (0);
}