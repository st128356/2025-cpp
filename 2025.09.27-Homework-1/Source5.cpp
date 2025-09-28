#include<cstdio>

int main(int argc, char** argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d", &a);
	b = a + 1;
	c = a - 1;
	printf("The next number for the number %d is %d.\n", a, b);
	printf("The previous number for the number %d is %d.", a, c);
	return 0;
}