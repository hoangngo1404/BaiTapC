// S = 1! + 2! + 3! + ... + n!
#include <stdio.h>
int n;
int giaithua(int n)
{
	int T = 1;
	for (int i = 1; i <= n; i++)
	{
		T = T * i;
	}
	return T;
}
int main()
{
	printf ("Nhap n: ");
	scanf ("%d", &n);
	int S = 0;
	for (int i = 1; i <= n; i++)
	{
		S = S + giaithua(i);
	}
	printf ("S = %d", S);
}
