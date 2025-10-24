#include<stdio.h>
#define G 1000

int main(int argc, char** argv)
{

	int n = 0;
	int a = 0;
	int b = 0;

	scanf_s("%d", &n);

	int arr[G] = { 0 };

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &arr[i]);
	}

	scanf_s("%d", &a);
	scanf_s("%d", &b);

	--a;
	--b;

	int max = arr[a];
	int c = a;

	for (int i = a + 1; i <= b; ++i)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			c = i;
		}
	}

	c += 1;

	printf("%d %d", max, c);

	return 0;
}