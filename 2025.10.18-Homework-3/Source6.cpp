#include<cstdio>

int main(int argc, char** argv)
{

	int a = 0;
	int b = 0;
	int n = 0;
	int m = 0;

	scanf("%d", &n);


	for (m = 0; m < n; ++m)
	{
		int t = 0;
		scanf("%d", &t);
		if (t > 0)
		{
			++a;
			if (a > b)
			{
				b = a;
			}
		}
		else
		{
			a = 0;
		}
	}

	printf("%d", b);

	return 0;
}