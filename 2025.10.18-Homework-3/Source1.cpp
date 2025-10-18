#include<cstdio>

int main(int argc, char** argv)
{

	int n = 0;
	scanf("%d", &n);
	int a = 0;
	int b = 1;

	while (n > 0)
	{
		int c = a + b;
		a = b;
		b = c;
		--n;
	}

	printf("%d", a);

	return 0;
}