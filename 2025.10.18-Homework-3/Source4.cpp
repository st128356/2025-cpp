#include<cstdio>

int main(int argc, char** argv)
{

	int a = 0;
	int b = 0;
	int n = 0;
	int m = 0;

	do
	{
		scanf("%d", &a);

		if (n == 0)
		{
			b = a;
			n = 1;
			m = 1;
		}
		else if (a != 0)
		{
			if (a == b)
			{
				++n;
				if (n > m)
				{
					m = n;
				}
			}
			else
			{
				n = 1;
				b = a;
			}
		}
	} while (a != 0);

	printf("%d", m);

	return 0;
}