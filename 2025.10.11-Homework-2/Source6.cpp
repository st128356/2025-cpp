#include<cstdio>
#include<cmath>

int main(int argc, char** argv)
{

	int a = 0;
	int b = 0;
	int c = 0;
	double D = 0;
	double x1 = 0;
	double x2 = 0;

	scanf("%d %d %d", &a, &b, &c);

	D = (double)b * b - 4.0 * a * c;

	if ((a == 0) && (b == 0) && (c == 0))
	{
		printf("-1");

		return 0;

	}

	if (a == 0)
	{
		if (b == 0)
		{
			printf("0");
		}
		else
		{
			x1 = -c / (double)b;
			printf("1\n%.4lf", x1);
		}
		return 0;
	}

	if (D < -1e-4)
	{
		printf("0");
	}
	else if (fabs(D) < 1e-4)
	{
		x1 = -b / (2.0 * a);
		printf("1\n%.4lf", x1);
	}
	else
	{
		x1 = (-b + sqrt(D)) / (2.0 * a);
		x2 = (-b - sqrt(D)) / (2.0 * a);

		if (x1 > x2) {
			double x3 = x1;
			x1 = x2;
			x2 = x3;
		}

		printf("2\n%.4lf\n%.4lf", x1, x2);
	}
	return 0;

}