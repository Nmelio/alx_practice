#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	if(n <1)
	{
		putchar('\n');
	}else
	{
		for(int k = 1; k<=n; k++)
		{

			for(int g = 1; g<k; g++)
			{
				putchar(32);
			}
			putchar(92);
			putchar('\n');
		}
	}

	return 0;
}
