#include<stdio.h>
#define G 1000

int main(int argc, char** argv)
{

	int n = 0;
	int a = 1000;
	int b = -1000;

	scanf_s("%d", &n);

	int arr[G] = { 0 };

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &arr[i]);

		if (arr[i] <= a)
		{
			a = arr[i];
		}
		if (arr[i] >= b)
		{
			b = arr[i];
		}

	}

	for (int i = 0; i < n; ++i)
	{
		if (arr[i] == b)
		{
			arr[i] = a;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		printf("%d", arr[i]);
		if (i < n - 1)
		{
			printf(" ");
		}
	}

	return 0;
}