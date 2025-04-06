#include <stdio.h>
#include <math.h>

typedef struct
{
	int x;
	int y;
} POINT;

double Dist(POINT p1, POINT p2);
void Quadrant(POINT p);

int main()
{
	int n, i;
	POINT p[10];
	POINT origin = {0, 0};
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &p[i].x, &p[i].y);
	}
	// quadrant
	for (i = 0; i < n; i++)
	{
		Quadrant(p[i]);
	}
	// distance
	if (n == 1)
	{
		printf("%lf\n", Dist(origin, p[1]));
	}
	else
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%.0lf\n", Dist(p[i], p[i + 1]));
		}
	}
	return 0;
}

double Dist(POINT p1, POINT p2)
{
	return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

void Quadrant(POINT p)
{
	if (p.x > 0 && p.y > 0)
		printf("1\n");
	else if (p.x < 0 && p.y > 0)
		printf("2\n");
	else if (p.x < 0 && p.y < 0)
		printf("3\n");
	else if (p.x > 0 && p.y < 0)
		printf("4\n");
	else if (p.x == 0 && p.y == 0)
		printf("1\n");
}
