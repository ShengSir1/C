//#include<stdio.h>
//#include <math.h>
////判断是否为素数（质数）
//int isPrime(int n)
//{
//	int i;
//	for (i = 2; i <= sqrt(n); i++)
//		if (n % i == 0)
//			return 0;
//	return 1;
//}
////拆解偶数并输出两个素数
//void divide(int n)
//{
//	int i;
//	for (i = 2; i <= n / 2; i++)
//	{
//		if (isPrime(i) == 1 && isPrime(n - i) == 1)
//			printf("%d=%d+%d\n", n, i, n - i);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int n;
//	while (~scanf_s("%d", &n))
//	{
//		if (n < 6 || n % 2 == 1)
//		{
//			if (!n)
//				return 0;
//			else
//			{
//				printf("Error!\n\n");
//				continue;
//			}
//		}
//		divide(n);
//	}
//	return 0;
//}