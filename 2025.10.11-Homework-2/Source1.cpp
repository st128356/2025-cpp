#include<cstdio>
#include<cmath>

int main(int argc, char** argv)
{

	int a = 0;

	char start[3], end[3];
	scanf("%s %s", start, end);

	char x1 = start[0];
	int y1 = start[1] - '0';
	char x2 = end[0];
	int y2 = end[1] - '0';

	int dx = abs(x2 - x1);
	int dy = abs(y2 - y1);

	if ((x1 == x2) || (y1 == y2))
	{
		printf("Rook\n");
		a = 1;
	}

	if (dx == dy)
	{
		printf("Bishop\n");
		a = 1;
	}

	if (pow((double)dx, 2.0) + pow((double)dy, 2.0) == 5)
	{
		printf("Knight\n");
		a = 1;
	}

	if (((x1 == x2) || (y1 == y2)) || (dx == dy))
	{
		printf("Queen\n");
		a = 1;
	}

	if (dx <= 1 && dy <= 1 && (dx != 0 || dy != 0))
	{
		printf("King\n");
		a = 1;
	}

	if ((x1 == x2) &&
		((y2 == y1 + 1) || (y1 == 2 && y2 == 4)) &&
		(y1 != 1) && (y1 != 8))
	{
		printf("Pawn\n");
		a = 1;
	}

	if (!a)
	{
		printf("Nobody");
	}
	return 0;
}