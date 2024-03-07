// S = 1/sqrt(1) + 3/sqrt(1+3) + 5/sqrt(1+3+5) + ... + (2n+1)/sqrt(1+3+...+(2n+1))
#include <stdio.h>
#include <math.h>
int n;
int Tong(int n)
{
	int Tong = 0;
	for (int i = 1; i <= n; i += 2)
	{
	    Tong = Tong + i;
    }
    return Tong;
}
int main()
{
	printf ("Nhap n: ");
	scanf ("%d", &n);
	if (n % 2 == 0)
	{
	   printf ("ERROR");
	   return 0;
    }
	float S = 0.0;
	for (int i = 1; i <= n; i += 2)
	{
		S += i/sqrt(Tong(i));
	}
	printf ("S = %.2f", S);
}
