#include<cstdio>
#include<cmath>

int main(int argc, char** argv)
{
	char x1 = 0;
	int y1 = 0;
	char x2 = 0;
	int y2 = 0;
	int a = 0;

	scanf("%c%d %c%d", &x1, &y1, &x2, &y2);

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