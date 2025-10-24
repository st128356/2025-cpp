#include<stdio.h>

int main(int argc, char** argv)
{

	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	scanf_s("%d %d %d %d %d", &n, &a, &b, &c, &d);

	int arr[n + 1] = { 0 };

	for (int i = 1; i <= n; ++i)
	{
		arr[i] = i;
	}

	while (a < b)
	{
		int temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
		++a;
		--b;
	}

	while (c < d)
	{
		int temp = arr[c];
		arr[c] = arr[d];
		arr[d] = temp;
		++c;
		--d;
	}

	for (int i = 1; i <= n; ++i)
	{
		printf("%d", arr[i]);
		if (i < n)
		{
			printf(" ");
		}
	}

	return 0;
}