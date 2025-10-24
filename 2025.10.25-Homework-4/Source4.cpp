#include<stdio.h>
#include<cmath>
#define G 1000

int main(int argc, char** argv)
{

	int n = 0;
	int x = 0;

	scanf_s("%d", &n);

	int arr[G] = { 0 };

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &arr[i]);
	}

	scanf_s("%d", &x);

	int a = arr[0];

	int b = abs(arr[0] - x);

	for (int i = 1; i < n; ++i)
	{
		int c = abs(arr[i] - x);

		if (c < b)
		{
			b = c;
			a = arr[i];
		}
		else if (c == b)
		{
			if (arr[i] < a)
			{
				a = arr[i];
			}
		}
	}

	printf("%d", a);

	return 0;
}