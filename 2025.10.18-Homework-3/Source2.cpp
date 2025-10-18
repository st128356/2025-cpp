#include<cstdio>
#include<cmath>

int main(int argc, char** argv)
{

	double a = 0;
	double b = 0;
	int n = 0;

	scanf("%lf %lf", &a, &b);

	if (a >= b)
	{
		printf("1");
	}
	else
	{
		n = 1;
		while (a < (b - 1e-9))
		{
			a *= 1.15;
			++n;
		}
		printf("%d", n);
	}

	return 0;
}