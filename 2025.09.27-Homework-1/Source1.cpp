#include<cstdio>

int main(int argc, char** argv)
{

	char a[7];
	int firstsum = 0;
	int secondsum = 0;

	scanf("%6s", a, sizeof(a));

	for (int i = 0; i < 3; i++)
	{
		firstsum += a[i] - '0';
	}

	for (int i = 3; i < 6; i++)
	{
		secondsum += a[i] - '0';
	}

	if (firstsum == secondsum)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}

	return 0;

}