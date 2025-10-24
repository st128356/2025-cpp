#include<stdio.h>


int main(int argc, char** argv)
{

	int n = 0;
	int a = 0;
	int b = 0;

	scanf_s("%d", &n);

	int arr[n] = { 0 };

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &arr[i]);
	}

	scanf_s("%d", &a);

	for (int i = 0; i < n; ++i)
	{
		if (arr[i] == a)
		{
			++b;
		}
	}

	printf("%d", b);

	return 0;
}