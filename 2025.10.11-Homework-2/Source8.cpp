#include<cstdio>
#include<cmath>

int main(int argc, char** argv)
{
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;

	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);

	int dx = abs(x1 - x2);
	int dy = abs(y1 - y2);

	if (pow((double)dx, 2.0) + pow((double)dy,2.0) == 5) 
	{
		printf("YES");
	}
	else 
	{
		printf("NO");
	}

	return 0;
}