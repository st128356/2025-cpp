#include<cstdio>

int main(int argc, char** argv)
{

	int a = 0;
	int b = 0;
	int n = 0;

	scanf("%d", &a);
	scanf("%d", &b);

	if (b > a)
	{
		int c = a;
		a = b;
		b = c;
	}

	do
	{
		scanf("%d", &n);
		
		if (n == 0) break;

		if (n > a)
		{
			b = a;
			a = n;
		}
		else if (n > b)
		{
			b = n;
		}
		
	} while (n != 0);

	printf("%d", b);

	return 0;
}