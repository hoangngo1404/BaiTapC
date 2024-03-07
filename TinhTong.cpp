// 1: Nhap 1 so N vao ban phim thoa dieu kien 5 < N < 10
// 2: Tinh tong cac so 1 + 2 + 3 + ... + N
#include <stdio.h>
int N;
void Buoc1()
{
	printf ("Nhap N: ");
	scanf ("%d", &N);
	while (N <= 5 || N >= 10)
	{
		printf ("Nhap lai N: ");
		scanf ("%d", &N);
	}
}
void Buoc2()
{
	int Tong = 0;
	for (int i = 1; i <= N; i++)
	{
	    Tong = Tong + i;
	   
    }
	printf ("Tong cac so tu 1 den %d la: %d", N, Tong);
}
int main()
{
    Buoc1();
	Buoc2();
	 return 0;     
}
