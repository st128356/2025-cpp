#include<cstdio>

int main(int argc, char** argv)
{

	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 101;
	int f = 101;
	int g = 101;
	int x = 0;

	scanf("%d %d %d %d", &a, &b, &c, &d);


	for (x = -100; x <= 100; ++x)
	{
		long long h = (long long)a * x * x * x 
			+ (long long)b * x * x 
			+ (long long)c * x + d;
		if ((h == 0) && (x != e) && (x != f))
		{
			if (e == 101)
			{
				e = x;
			}
			else if (f == 101)
			{
				f = x;
			}
			else
			{
				g = x;
				break;
			}
		}
	}
	if (e > f)
	{
		x = e;
		e = f;
		f = x;
	}
	if (e > g)
	{
		x = e;
		e = g;
		g = x;
	}
	if (f > g)
	{
		x = f;
		f = g;
		g = x;
	}

	printf(g == 101 ? f == 101 ? "%d" : "%d %d" : "%d %d %d", e, f, g);

	return 0;
}