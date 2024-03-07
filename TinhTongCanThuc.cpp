// S = 1/sqrt(2) + 2/sqrt(3) + ... + n/sqrt(n+1)
#include <stdio.h>
#include <math.h>
int main()
{
	unsigned int n;
	printf ("Nhap n: ");
	scanf ("%d", &n);
	float S = 0.0;
	for (int i = 1; i <= n; i++)
	{
		S += i / sqrt(i+1);
	}
	printf ("S = %.2f", S);
}
