#define _CRT_SECURE_NO_WARNINGS 1

#include "demo1.h"
#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAXSIZE 15
#define YanghuisanjiaoRows 10
//typedef int ElemType; //ElemType(�Լ��������) �� typedef int ElemType �� ElemType��intһ��

//ð������
void BubbleSort(int array[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

//��ʾ
void display(int a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%d\t", a[i]);
	}
}

int fun(int x,int y) {
	static int m = 0,i = 2;
	i += m + 1; m = i + x + y;
	return m;
}

static int sum = 0,a=0,b=0;
int f(int n) {
	sum++;
	if (n==0)
	{
		a++;
		return 1;
	}
	if (n == 1)
	{
		b++;
		return 1;
	}
	return f(n - 1) + f(n - 2);
}
//�ַ���������ͨ�õ� ��ת������ֵ��Ӧ��ASCII��ֵ
void main() {
	//int m = 97;
	//char ch = 'B';
	//printf("m: %d %c\n",m,m);//%c ��ʽint���͵�97���Ὣ������ASCII����ʹ��  97����a��ASCII��ֵ 
	//printf("ch: %d %c\n", ch, ch);
	//printf("%s\n", "student");
	//printf("%10s\n", "student");
	//printf("%-10s\n", "student");
	//printf("%10.3s\n", "student");
	//printf("%.3s\n", "student");


	//getchar(); ������Ӧ�� 

	//char cc = getchar(); 
	//printf("%c %d\n", cc, cc);
	//printf("%c %d\n", cc - 32, cc - 32); //С���ַ���ASCII�� ͨ�� -32 ת��Ϊ����Ӧ�Ĵ�д�ַ�


	//˳��ṹ������ƾ���
	//������֪������a,b,c,���������������������������ĺ��׹�ʽ��������ʼǣ�
	//int a, b, c;
	//float s, area;
	//scanf_s("%d%d%d",&a,&b,&c);
	//s = (float)(a + b + c) / 2;
	//area = sqrt(s * (s - a) * (s - b) * (s - c)); //sqrt() ��ѧ���� --����
	//printf("%.3f",area); 

	//�������� �����������¶��ˣ���������ˡ���
	// ���豻����Ϊ 123

#pragma region if���
	//int x;
	//scanf_s("%d", &x);

	//if (x == 123)
	//{
	//	printf("���ˣ��¶Ե���Ϊ %d", x);
	//}
	//else
	//{
	//	printf("����");
	//}

	//if (1) printf("Ϊ��");//С���������0ʱΪ�棬����0ʱΪ��

	//if (x > 1)
	//{
	//	if (x == 2)
	//	{
	//		printf("��Ƕif��䣬���if��Ҫ�ô����Ű��������������ֶ�����");
	//	}
	//	else
	//	{

	//	}
	//}
	//else
	//{
	//	printf("����");
	//}

	//������ Ӧ�������
	/*if (x > 1)
		if (x == 2) printf("if��Ƕ��û��ʹ��{}�޶���Χ�����ֶ�����");
	else
		printf("C���Թ涨��else��������ǰ���������δ����Ե�if���,������ʽΪx==2��if���");*/
#pragma endregion

#pragma region switch ���
	/*switch (x)
	{
	case 1:printf("��ͨ��Ա");
	case 2:printf("һ����Ա");
	case 3:printf("������Ա");
	case 4:printf("������Ա");
	default: 
		printf("δ����ò���");
		break;
	}

	char grage;
	scanf_s("%c", &grage,20);
	switch (grage)
	{
	case 'A':printf("85~100\n"); break;
	case 'B':printf("70~84\n"); break;
	case 'C':printf("60~69\n"); break;
	case 'D':printf("<60\n"); break;
	default: printf("enter data error!\n"); break;
	}*/

#pragma endregion

#pragma region �������ߣ��ж��Ƿ�����������Σ�����������������(���׹�ʽ)�������������ʾ
	//�����߼�
	//������������ߵİ��ܳ� p  -- p=(a+b+c)/2;
	//���ú��׹�ʽ��������ε���� -- S=sqrt[p(p-a)(p-b)(p-c)]
	//double a, b, c;//����������
	//double p;//���������ΰ��ܳ�
	//double S;//�������������
	/*scanf_s("%lf", &a);
	scanf_s("%lf", &b);
	scanf_s("%lf", &c);*/
	//��д
	/*scanf_s("%lf%lf%lf",&a,&b,&c);
	if (a+b>c&&a+c>b&&b+c>a)
	{
		p = (a + b + c) / 2;
		S = sqrt(p * (p - a) * (p - b) * (p - c));
		printf("%lf",S);
	}
	else
	{
		printf("�������߲����㹹�������ε�����������������");
	}*/
#pragma endregion

#pragma region Whileѭ�� ����;�ۼӺ�����
	//int i = 1;
	//int a = 0;//����һ����������ʼ����ֵ������ֵ�ı�����һ�������
	//while (i<=5)//����ʽΪ'��'ʱִ��ѭ������䣬����ʽΪ'��'ʱ��ִ������ѭ��
	//{
	//	a =a + i;
	//	i++;
	//	printf("Whileѭ�����ص㣺���жϱ���ʽ����ִ��ѭ�������");
	//}
	//printf("sum=%d", &a);

	//while �ؼ���
		/*ѭ�������ĳ�ʼ״̬
		while (ѭ��������������ʽ)
		{
			ѭ�������;��һ��Ҫ�иı�ѭ����������䣬������Ϊ��ѭ����
		}*/
#pragma endregion

#pragma region do---whileѭ��
	/*do
	{
		a = a + i;
		i++;
	} while (i<=5);
	printf("sum=%d", &a);*/


	//do---while�����ص㣺����������ִ��ѭ���壬Ȼ���ж�ѭ�������Ƿ������ѭ��������Ҫ��ִ��һ��
#pragma endregion

	//while��do---while��� �Ĳ�ͬ��while����ѭ�������һ�ζ���ִ�У�do---while����ѭ��������ִ��һ��
#pragma region forѭ��
	/*for (size_t i = 0; i < .length; i++)
	{

	}*/
	//����д��
	/*int i = 0;
	for (;;)
	{
		if (i>5) break; //break�����ǰ��ֹѭ��
			i++;
	}
	for (size_t i = 0; i <= 5; a = a + i, i++);*/
#pragma endregion

#pragma region ѭ����Ƕ��
	/*for (size_t i = 1; i <= 2; i++)
		for (size_t j = 1; j <= 3; j++)
			printf("%d:%d",&i,&j);*/
#pragma endregion

#pragma region �žų˷���
	/*for (size_t i = 1; i < 10; i++)
	{
		for (size_t j = 1; j < 10; j++)
		{
			printf("%4d",i*j);
		}
		printf("\n");
	}*/
	//�žų˷���������
	/*for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d\t",j,i, i * j);
		}
		printf("\n");
	}*/
	//�žų˷���������
	//2 * 4 =8   -- 2�������ѭ���ı���i��4����Ƕ��ѭ������j
	/*for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			if (j<i)
			{
				printf("        ");
			}
			else
			{
				printf("%d*%d=%2d\t", i, j, i * j);
			}
		}
		printf("\n");
	}*/
#pragma endregion

#pragma region ����һ������n���ж����Ƿ�����  --�������壺����ֻ�ܱ�1���Լ���������
//int i,n;
//scanf_s("%d",&n);
//for (i = 2; i <= n-1; i++)
//{
//	if ((n%i)==0)//n���ܱ�i�������� n%i ���ܵ���0��n����iȡ��������Ϊ0���������������˵��n��������
//	{
//		break;
//	}
//}
//if (i<n)
//{
//	printf("���������������������nΪ��%d",n);
//}
//else
//{
//	printf("�������������������nΪ��%d", n);
//}
#pragma endregion

#pragma region ��100��200֮��Ĳ��ܱ�3��������
//for (int i = 100;i<=200; i++)
//{
//	//д��һ��
//	/*if (i%3!=0)
//	{
//		printf("%d\t", i);
//	}*/
//	//д������
//	if (i%3==0)
//	{
//		continue;
//	}
//	printf("%d\t", i);
//}

#pragma endregion

#pragma region ���㲢���һ����λ�����ĸ�λ��ʮλ���Ͱ�λ֮��
//int num=0, ge, shi, bai, sum;
//printf("����һ����λ���������ظ���λ������֮��\n");
//scanf_s("%d",&num);
//bai = num/100 % 10;
//shi = num/10 % 10;
//ge = num % 10;
//sum = ge + shi + bai;
//printf("��λ=%d\tʮλ=%d\t��λ=%d\t��=%d",ge,shi,bai,sum);
#pragma endregion


#pragma region ����1+2-3+4-5+6-7+8... ... -100
//��ʽ��ת��Ϊ (1*1)+(2*1)+(3*-1)+(4*1)+(5*-1)... ...
//int i = 1;
//int sin = 1;
//int sum = 0;
////д��һ��
////for (; i <= 100; i++)
////{
////	sum = i* sin+sum;
////	sin = -sin;
////}
//
////д������
//while (i<=100)
//{
//	sum = i * sin + sum;
//	sin = -sin;
//	i++;
//}
//printf("%d", sum);
#pragma endregion

#pragma region ����������n�����㲢���n!��n!,��Ϊn�Ľ׳ˣ����ƹ�ʽ��i!=(i-1)!*i ��C���Ա�ʾ��f=f*i;
//int n, f, i;
//printf("������������n��");
//scanf_s("%d",&n);
//for (i = 1,f=1; i <=n; i++)
//{
//	f = f * i;
//}
//printf("%d! =%d", n, f);

//����������n�����㲢���1��n֮�������������Ľ׳�
//for (i = 1, f = 1; i <= n; i++)
//{
//	f = f * i;
//	printf("%d! =%d\t", i, f);
//
//}

//����������n�����㲢��� 1!+2!+3!+4! ... +n!
//int sum = 0;
//for (i = 1,f=1 ; i  <= n; i ++)
//{
//	f = f * i;
//	sum += f;
//	printf("%d", sum);
//
//}
#pragma endregion

//���⣺�öδ���������Ƕ��٣�
//int p[8] = { 11,12,13,14,15,16,17,18 },i=0,j=0;
//while (i++<7)
//{
//	if (p[i]%2)
//	{
//		j += p[i];
//	}
//}
//printf("%d\n", j);

#pragma region ����ʮ������������������  --����̨��
//int a[10], i, max;
//printf("������10������\n");
//for ( i = 0; i < 10; i++)//ѭ�����������������
//{
//	scanf_s("%d", &a[i]);
//}
//max = a[0];
//for ( i = 1; i < 10; i++)
//{
//	if (max<a[i])//�Ƚ�����
//	{
//		max = a[i];
//	}
//}
//printf("������ǣ�%d",max);
#pragma endregion

#pragma region �ҳ�10�����е���������������һ��������
//int a[10], i, max,p,temp;
//printf("������10������\n");
//for (i = 0; i < 10; i++)//ѭ�����������������
//{
//	scanf_s("%d", &a[i]);
//}
//max = a[0];
//for (i = 1; i < 10; i++)
//{
//	if (max < a[i])//�Ƚ�����
//	{
//		max = a[i];
//		p = i;
//	}
//}
//printf("������ǣ�%d,�����±�λ���ǣ�%d,���������ŵ�%d��\n", max,p,p+1);
//temp = a[0];
//a[0] = max;
//a[p] = temp;
//printf("��������һ����������\n");
//for (i=0; i < 10;i++)
//{
//	printf("\n%d\t", a[i]);//����������������ݺ������
//}
#pragma endregion

#pragma region �����鴦��Fibonacci�������⣬���ǰ20��  --��֪��f[0]=f[1]=1,f[i]=f[i-2]+f[i-1]
	//int i, f[20] = {1,1};
	//for ( i = 2; i < 20; i++)
	//{
	//	f[i] = f[i - 2] + f[i - 1];
	//}
	//for (i = 0; i < 20; i++)
	//{
	//	if (i%5==0)//ÿ���5�����ݻ�һ����
	//	{
	//		printf("\n");
	//	}
	//	printf("%-10d", f[i]);
	//}
#pragma endregion

#pragma region ð������
//int array[MAXSIZE];
//int n;
//for (int i = 0; i < MAXSIZE; i++) {
//	array[i] = 0;
//}
//printf("��������Źؼ��ָ���: ");
//scanf_s("%d", &n);
//printf("������ؼ���: ");
//for (int i = 0; i < n; i++) {
//	scanf_s("%d", &array[i]);
//}//����������ݶ��ŵ�������
//BubbleSort(array, n);
//display(array, n);
#pragma endregion

#pragma region �������ֱ��������
//��������
//for (int i = 1; i < 5; i++)
//{
//
//	for (int j = 1; j <= i; j++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 5-i; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//}
//��������
//for (int i = 1; i < 5; i++)
//{
//	for (int x = 1; x <= 5-i; x++)
//	{
//		printf(" ");
//	}
//	for (int j = 1; j <=i ; j++)
//	{
//		printf("*");
//	}
//	printf("\n");
//}
//����������
//for (int i = 1; i < 5; i++)
//{
//	for (int j = 1; j <= i; j++)
//	{
//		printf("*");
//	}
//	printf("\n");
//}
//����������
//for (int i = 1; i < 5; i++)
//{
//	for (int j = 1; j <= 5-i; j++)
//	{
//		printf("*");
//	}
//	printf("\n");
//}
#pragma endregion

#pragma region �����������������
//for (int i = 1; i < 5; i++)
//{
//	for (int j = 1; j <=5-i; j++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 2*i-1; x++)
//	{
//		printf("*");
//	}
//	/*for (int k = 1; k <= 5-i; k++)
//	{
//		printf(" ");
//	}*/
//	printf("\n");
//}
#pragma endregion

#pragma region �����������
//for (size_t i = 1; i <= 5; i++)
//{
//	for (size_t j = 1; j <= 5-i; j++)
//	{
//		printf(" ");
//	}
//	for (size_t j = 1; j <=2*i-1; j++)
//	{
//		printf("*");
//	}
//	printf("\n");
//}
//for (size_t i = 4; i >=1; i--)
//{
//	for (size_t j = 1; j <= 5-i; j++)
//	{
//		printf(" ");
//	}
//	for (size_t j = 1; j <= i*2-1; j++)
//	{
//		printf("*");
//	}
//	printf("\n");
//}
#pragma endregion

#pragma region ����ҳ�1000֮�ڵ���������
//int sum=0 ,x;
//scanf_s("%d",&x);
//for (int i = 1; i <= x/2; i++)
//{
//	if (x%i==0)
//	{
//		sum += i;
//	}
//}
//if (sum == x)
//{
//	printf("%d������", x);
//}
//else
//{
//	printf("%d��������", x);
//}
#pragma endregion

#pragma region ����10���ɼ�����ƽ���ɼ���������ƽ���ɼ��ķ��������ʹ��һά���飩
//float a[10],sum=0,avg;
//for (int i = 0; i < 10; i++)
//{
//	scanf_s("%f",&a[i]);
//	sum += a[i];
//}
//avg = sum / 10;
//for (int i = 0; i < 10; i++)
//{
//	if (a[i] < avg)
//	{
//		printf("%f\t", a[i]);
//	}
//}

#pragma endregion

#pragma region ����һ���ַ���ͳ�����и�����д��ĸ�ĳ��ִ���
//	int b[26] = { 0 };
//char a;
//while ((a=getchar())!='\n')
//{
//	if (a>='A'&&a<='Z')
//	{
//		b[a - 'A']++;
//	}
//}
//for (int i = 0; i < 26; i++)
//{
//	if(i%6==0) printf("\n");
//	printf("%c����%d��\t",'A'+i,b[i]);
//}

#pragma endregion

#pragma region ѡ������(��������)
//float arr[10];
//for (int i = 0; i < 10; i++)
//{
//	scanf_s("%f",&arr[i]);
//}
//
//for (int i = 0; i < 9; i++)//i<n-1
//{
//	for (int j = i + 1; j < 10; j++)//j<n
//	{
//		if (arr[i] > arr[j])//��������
//		{
//			float temp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = temp;
//		}
//	}
//}
//for (int i = 0; i < 10; i++)//�������
//{
//	printf("%.2f ", arr[i]);
//}

#pragma endregion

#pragma region ���ŵ��
//���⣺
//������һ�ӱ�������֪���ж����ˣ�����ʿ���Ŷӱ�����
//����1��5��������ĩһ��ʿ��������Ϊ1��
//����1��6��������ĩһ��ʿ��������Ϊ5��
//����1��7��������ĩһ��ʿ��������Ϊ4��
//����1��11��������ĩһ��ʿ��������Ϊ10��
//������������ж��ٱ�

//int n = 10;
//while (1)
//{
//	if (n%5==1&&n%6==5&&n%7==4&&n%11==10)
//	{
//		printf("%d", n);
//		break;
//	}
//	n++;
//}


#pragma endregion

#pragma region ����ά����a[N][N]�е�Ԫ�����л��������������a[N][N]��.
//	int a[3][3] = {1,2,3,4,5,6,7,8,9}, temp;
//for (int i = 0; i < 3; i++)
//{
//	for (int j = 0; j < i; j++)//ע�⣺j<i
//	{
//		temp = a[i][j];
//		a[i][j] = a[j][i];
//		a[j][i] = temp;
//	}
//}
//
//for (int i = 0; i < 3; i++)
//{
//	for (int j = 0; j < 3; j++)
//	{
//		printf("%2d",a[i][j]);
//	}
//	printf("\n");
//}
#pragma endregion

#pragma region ��ӡ����������ǰʮ��(��ά����)
//int a[YanghuisanjiaoRows][YanghuisanjiaoRows] = { 0 };
//for (size_t i = 0; i < YanghuisanjiaoRows; i++)
//{
//	a[i][0] = 1;
//	a[i][i] = 1;
//}
//for (size_t i = 2; i < YanghuisanjiaoRows; i++)
//{
//	for (size_t j = 1; j < i; j++)
//	{
//		a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//	}
//}
//for (size_t i = 0; i < YanghuisanjiaoRows; i++)
//{
//	for (size_t j = 0; j <= i; j++)
//	{
//		printf("%4d",a[i][j]);
//	}
//	printf("\n");
//}
#pragma endregion



#pragma region �����ģ���Ծ�һ ѡ���������֤����
//char a = "\\\"ABC\"\\";

//int x , * p = &x;
//printf("%d %d %d %d %d", &*p,p,&x,*p,x);//���(�����):2095844 2095844 2095844 -858993460 -858993460

//int a=1,b=2, c = 2,t;
//while (a<b<c)//��ѭ�����������
//{
//	t = a;
//	a = b;
//	b = t;
//	c -- ;
//}
//printf("%d %d %d",a,b, c);

//int i;
//for ( i =2; i ==0;)//��ִ��ѭ����
//{
//	printf("%d", i--);
//}

//int x = 5, a = 0, b = 0;
//if (x=a+b)//x����ֵΪ0 ��0Ϊ�� �����else��֧
//{
//	printf("****\n");
//}
//else
//{
//	printf("####\n");
//}

//���ڸ�ֵ����ʽE1=E2������E1�����ǿ��޸ĵ���ֵ��E2����ֵ
//int a, b , c;
//a = 7 + b + c = a + 7;//����������ʽ�����ǿ��޸ĵ���ֵ��
//a = 7 + b, c = a + 7; //������ʹ��δ��ʼ�����ڴ�b��b�����ﲻ�Ǳ���ֵ�ı���
#pragma endregion

#pragma region �����ģ���Ծ�һ �����Ķ��� ������֤����
//��һ��
//int a=0, i;
//for ( i = 1; i < 5; i++)
//{
//	switch (i)
//	{
//		case 0: 
//		case 3: a += 2; break;
//		case 1:
//		case 2:a += 3; break;
//		default: a += 5; break;
//	}
//}
//printf("%d", a);

//�ڶ���
//char line[] = "12345";//ע�⣺line ��line[]������
//int i, k = strlen(line); //strlen()������ʹ�øú�����Ҫ���� #include <string.h>��  --��������line�ĳ��� ��\0����
//for ( i = 0; i < 4; i++)
//{
//	line[k - i]='\0';
//	puts(line+i);//��lineָ��˳��iλ��ʼ��ӡ��"\0"ǰ��������������\0"�� 
//}

//������
//int j = 1, m = 1, k;
//k = fun(j, m); printf("%3d", k);
//k = fun(j, m); printf("%3d", k);

//������
//printf("%d", f(6));
//printf("\n%d", sum);//ִ����25��f()����
//printf("\n%d", a);//ִ����25��f()������n==0��֧
//printf("\n%d", b);//ִ����25��f()������n==1��֧
#pragma endregion




}


