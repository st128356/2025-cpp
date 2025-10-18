#include<cstdio>

int main(int argc, char** argv)
{

	long a = 0;
	long b = 0;
	long n = 0;
	scanf("%ld %ld", &a, &b);

	long x = a;
	long y = b;

	while (y != 0) 
	{
		long z = y;
		y = x % y;
		x = z;
	}

	n = a / x * b;

	printf("%ld", n);

	return 0;
}