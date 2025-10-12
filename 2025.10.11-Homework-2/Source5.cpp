#include<cstdio>
#include<cmath>

int main(int argc, char** argv)
{

	int a = 0;
	int b = 0;
	int c = 0;
	int a1 = 1;

	scanf("%d %d %d", &a, &b, &c);

	if ((a == 0) && (b == 0) && (c == 0))
	{
		printf("0");
		return 0;
	}

	if (a != 0)
	{
		printf("%d", a);
		a1 = 0;
	}

	if (b != 0)
	{
		if (!a1)
		{
			if (b > 0)
			{
				printf("+");
			}
		}
		
		if (abs(b) == 1)
		{
			if (b == -1)
			{
				printf("-");
			}
		}
		else
		{
			printf("%d", b);
		}
		printf("x");
		a1 = 0;
	}

	if (c != 0)
	{
		if (!a1)
		{
			if (c > 0)
			{
				printf("+");
			}
		}
		if (abs(c) == 1)
		{
			if (c == -1)
			{
				printf("-");
			}
		}
		else
		{
			printf("%d", c);
		}
		printf("y");
		a1 = 0;
	}

	return 0;

}