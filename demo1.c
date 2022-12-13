#define _CRT_SECURE_NO_WARNINGS 1

#include "demo1.h"
#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAXSIZE 15
#define YanghuisanjiaoRows 10
//typedef int ElemType; //ElemType(自己起的名字) ； typedef int ElemType 即 ElemType与int一样

//排序函数 交换指向法
void sort(char* name[], int n) {
	char* pt;
	int i, j, k;
	for (i = 0; i < n - 1; i++) {
		k = i;
		for (j = i + 1; j < n; j++)
			if (strcmp(name[k], name[j]) > 0) k = j;//换擂主
		if (k != i) {
			pt = name[i];//交换指向
			name[i] = name[k];//交换指向
			name[k] = pt; //交换指向          
		}
	}
}

//数组输出函数 
void print(char* name[], int n) {
	int i;
	for (i = 0; i < n; i++)
		printf("%s\n", name[i]);
}

//指针实现字符串求长度（不包括 '\0'）递归法
int strlength2(char* p) {
	int k = 0;
	if (*p=='\0')
	{
		k = 0;
	}
	else
	{
		k = 1 + strlength2(p + 1);
	}
	return k;
}

//指针实现字符串求长度（不包括 '\0'）非递归
int strlength(char *p) {
	int k = 0;
	while (*p != '\0')
	{
		k++;
		p++;
	}
	return k;
}

//指针实现字符串比较（返回 0 则表示相等；返回值 大于0 则表示第一个参的值 较大；小于0 则相反）
int mystrcmp(char *s,char *t) {
	while (*s==*t)
	{
		if (*s == '\0') return 0;//比较结束，返回 0 则表示相等
		s++;
		t++;
	}
	return *s - *t;//返回值 大于0 则表示第一个参的值 较大；小于0 则相反
}

//指针实现字符串复制
void mycopy(char *dstStr,char *srcStr) {
	while (*srcStr)
	{
		*dstStr = *srcStr;
		dstStr++;
		srcStr++;
	}
	*dstStr = '\0';
}

//指针实现字符串连接
void sss(char* p, char* q) {
	while (*p) p++;//找尾
	while (*q)
	{
		*p = *q;
		p++;
		q++;
	}
	*p = '\0';
}

//指针变量接收数组实现逆序排列
void swap(int* arr, int n) {
	int t;
	for (int i = 0; i < n/2; i++)
	{
		t = arr[i];//arr[i] --顺数第一个数
		arr[i] = arr[n - i - 1];//arr[n - i - 1] --倒数第一个数
		arr[n - i - 1] = t;
	}
}

//选择排序
void SelectSort(int array[],int n) {
	int temp = 0;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (array[i]>array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}


//冒泡排序
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

//显示
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
//求Fibonacci数列
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

//拼接字符串
void cats(char str1[30],char str2[10]) {
	int i = 0, k = 0;
	while (str1[i]!='\0')
	{
		i++;
	}
	while (str2[k]!='\0')
	{
		str1[i] = str2[k];
		i++; k++;
	}
	str1[i] = '\0';

}

//求字符串长度
int length(char str1[50]) {
	int i = 0;
	while (str1[i] != '\0')
	{
		i++;
	}
	return i;
}

//复制字符串(str2复制到str1)
void copy(char str1[50], char str2[50]) {
	int i = 0,k=0;
	k = length(str2);
	for ( ;  i<k ; i++)
	{
		str1[i] = str2[i];
	}
	str1[i] = '\0';
}

//判断是否为回文数（拆分法）：1为是，0为否 --适合判断5位整数
int IsPalindromicNumber1(int number) {
	int ge, shi, bai, qian, wan;
	ge = number % 10;
	shi = number / 10 % 10;
	bai = number / 100 % 10;
	qian = number / 1000 % 10;
	wan = number / 10000 % 10;
	if (ge==wan&&shi==qian)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//判断是否为回文数（构造法）：1为是，0为否 --适合判断任意位数整数
int IsPalindromicNumber2(int number) {
	int inverseNumber = 0;
	int num = number;
	while (number)
	{
		inverseNumber = inverseNumber * 10 + number % 10;
		number /= 10;
	}
	if (inverseNumber==num)//判断逆序数与原来输入的数相等即为回文数
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//判断是否为回文字符串：1为是，0为否
int IsPalindromicString(char str[]) {
	int n = length(str);
	int k = 0;
	for (int i = 0; i <= n/2; i++)
	{
		if (str[i]==str[n-i-1])
		{
			k = 1;
		}
		else
		{
			k = 0;
		}
	}
	if (k)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//判断一个整数是否为完数：1为是，0为否
int IsPerfectNumber(int number) {
	int sum = 0;
	for (int i = 1; i <= number/2; i++)//该整数因子的范围
	{
		if (number %i==0)//说明i是n的一个因子
		{
			sum += i;
		}
	}
	if (sum==number)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//字符和整型是通用的 会转换成其值对应的ASCII码值
void main() {
	//int m = 97;
	//char ch = 'B';
	//printf("m: %d %c\n",m,m);//%c 格式int类型的97，会将它当成ASCII码来使用  97则是a的ASCII码值 
	//printf("ch: %d %c\n", ch, ch);
	//printf("%s\n", "student");
	//printf("%10s\n", "student");
	//printf("%-10s\n", "student");
	//printf("%10.3s\n", "student");
	//printf("%.3s\n", "student");


	//getchar(); 函数的应用 

	//char cc = getchar(); 
	//printf("%c %d\n", cc, cc);
	//printf("%c %d\n", cc - 32, cc - 32); //小数字符的ASCII码 通过 -32 转换为它对应的大写字符


	//顺序结构程序设计举例
	//例：已知三条边a,b,c,求三角形面积。计算三角形面积的海伦公式：（详见笔记）
	//int a, b, c;
	//float s, area;
	//scanf_s("%d%d%d",&a,&b,&c);
	//s = (float)(a + b + c) / 2;
	//area = sqrt(s * (s - a) * (s - b) * (s - c)); //sqrt() 数学函数 --根号
	//printf("%.3f",area); 

	//猜数程序。 请猜数，如果猜对了，输出“对了”。
	// 假设被猜数为 123

#pragma region if语句
	//int x;
	//scanf_s("%d", &x);

	//if (x == 123)
	//{
	//	printf("对了，猜对的数为 %d", x);
	//}
	//else
	//{
	//	printf("错了");
	//}

	//if (1) printf("为真");//小括号里面非0时为真，等于0时为假

	//if (x > 1)
	//{
	//	if (x == 2)
	//	{
	//		printf("内嵌if语句，外层if需要用大括号包起来，否则会出现二义性");
	//	}
	//	else
	//	{

	//	}
	//}
	//else
	//{
	//	printf("错了");
	//}

	//二义性 应如何理解
	/*if (x > 1)
		if (x == 2) printf("if内嵌且没有使用{}限定范围，出现二义性");
	else
		printf("C语言规定：else总是与它前面最近的且未曾配对的if配对,及表达式为x==2的if语句");*/
#pragma endregion

#pragma region switch 语句
	/*switch (x)
	{
	case 1:printf("普通会员");
	case 2:printf("一级会员");
	case 3:printf("二级会员");
	case 4:printf("三级会员");
	default: 
		printf("未定义该参数");
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

#pragma region 给三条边，判断是否能组成三角形，是三角形则计算面积(海伦公式)并输出，否则提示
	//计算逻辑
	//求出所给三条边的半周长 p  -- p=(a+b+c)/2;
	//套用海伦公式求出三角形的面积 -- S=sqrt[p(p-a)(p-b)(p-c)]
	//double a, b, c;//定义三条边
	//double p;//定义三角形半周长
	//double S;//定义三角形面积
	/*scanf_s("%lf", &a);
	scanf_s("%lf", &b);
	scanf_s("%lf", &c);*/
	//简写
	/*scanf_s("%lf%lf%lf",&a,&b,&c);
	if (a+b>c&&a+c>b&&b+c>a)
	{
		p = (a + b + c) / 2;
		S = sqrt(p * (p - a) * (p - b) * (p - c));
		printf("%lf",S);
	}
	else
	{
		printf("此三条边不满足构成三角形的条件！请重新输入");
	}*/
#pragma endregion

#pragma region While循环 例如;累加和问题
	//int i = 1;
	//int a = 0;//定义一个变量并初始化赋值，不赋值的变量是一个随机数
	//while (i<=5)//表达式为'真'时执行循环体语句，表达式为'假'时不执行跳出循环
	//{
	//	a =a + i;
	//	i++;
	//	printf("While循环的特点：先判断表达式，后执行循环体语句");
	//}
	//printf("sum=%d", &a);

	//while 关键点
		/*循环条件的初始状态
		while (循环条件，及表达式)
		{
			循环体语句;（一定要有改变循环条件的语句，否则会变为死循环）
		}*/
#pragma endregion

#pragma region do---while循环
	/*do
	{
		a = a + i;
		i++;
	} while (i<=5);
	printf("sum=%d", &a);*/


	//do---while语句的特点：先无条件的执行循环体，然后判断循环条件是否成立，循环体至少要被执行一次
#pragma endregion

	//while与do---while语句 的不同：while语句的循环体可能一次都不执行，do---while语句的循环体最少执行一次
#pragma region for循环
	/*for (size_t i = 0; i < .length; i++)
	{

	}*/
	//其他写法
	/*int i = 0;
	for (;;)
	{
		if (i>5) break; //break语句提前终止循环
			i++;
	}
	for (size_t i = 0; i <= 5; a = a + i, i++);*/
#pragma endregion

#pragma region 循环的嵌套
	/*for (size_t i = 1; i <= 2; i++)
		for (size_t j = 1; j <= 3; j++)
			printf("%d:%d",&i,&j);*/
#pragma endregion

#pragma region 九九乘法表
	/*for (size_t i = 1; i < 10; i++)
	{
		for (size_t j = 1; j < 10; j++)
		{
			printf("%4d",i*j);
		}
		printf("\n");
	}*/
	//九九乘法表正三角
	/*for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d\t",j,i, i * j);
		}
		printf("\n");
	}*/
	//九九乘法表倒三角
	//2 * 4 =8   -- 2是最外层循环的变量i，4是内嵌的循环变量j
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

#pragma region 输入一个整数n，判定它是否素数  --素数定义：素数只能被1和自己本身整除
//int i,n;
//scanf_s("%d",&n);
//for (i = 2; i <= n-1; i++)
//{
//	if ((n%i)==0)//n不能被i整除（及 n%i 不能等于0，n除以i取余数不能为0），如果被整除了说明n不是素数
//	{
//		break;
//	}
//}
//if (i<n)
//{
//	printf("不是素数，您输入的整数n为：%d",n);
//}
//else
//{
//	printf("是素数，您输入的整数n为：%d", n);
//}
#pragma endregion

#pragma region 额100到200之间的不能被3整除的数
//for (int i = 100;i<=200; i++)
//{
//	//写法一：
//	/*if (i%3!=0)
//	{
//		printf("%d\t", i);
//	}*/
//	//写法二：
//	if (i%3==0)
//	{
//		continue;
//	}
//	printf("%d\t", i);
//}

#pragma endregion

#pragma region 计算并输出一个三位整数的个位，十位，和百位之和
//int num=0, ge, shi, bai, sum;
//printf("输入一个三位整数，返回各个位数及其之和\n");
//scanf_s("%d",&num);
//bai = num/100 % 10;
//shi = num/10 % 10;
//ge = num % 10;
//sum = ge + shi + bai;
//printf("个位=%d\t十位=%d\t百位=%d\t和=%d",ge,shi,bai,sum);
#pragma endregion


#pragma region 计算1+2-3+4-5+6-7+8... ... -100
//将式子转换为 (1*1)+(2*1)+(3*-1)+(4*1)+(5*-1)... ...
//int i = 1;
//int sin = 1;
//int sum = 0;
////写法一：
////for (; i <= 100; i++)
////{
////	sum = i* sin+sum;
////	sin = -sin;
////}
//
////写法二：
//while (i<=100)
//{
//	sum = i * sin + sum;
//	sin = -sin;
//	i++;
//}
//printf("%d", sum);
#pragma endregion

#pragma region 输入正整数n，计算并输出n!（n!,及为n的阶乘）递推公式：i!=(i-1)!*i ；C语言表示：f=f*i;
//int n, f, i;
//printf("请输入正整数n：");
//scanf_s("%d",&n);
//for (i = 1,f=1; i <=n; i++)
//{
//	f = f * i;
//}
//printf("%d! =%d", n, f);

//输入正整数n，计算并输出1到n之间所有正整数的阶乘
//for (i = 1, f = 1; i <= n; i++)
//{
//	f = f * i;
//	printf("%d! =%d\t", i, f);
//
//}

//输入正整数n，计算并输出 1!+2!+3!+4! ... +n!
//int sum = 0;
//for (i = 1,f=1 ; i  <= n; i ++)
//{
//	f = f * i;
//	sum += f;
//	printf("%d", sum);
//
//}
#pragma endregion

//问题：该段代码输出的是多少？
//int p[8] = { 11,12,13,14,15,16,17,18 },i=0,j=0;
//while (i++<7)
//{
//	if (p[i]%2)
//	{
//		j += p[i];
//	}
//}
//printf("%d\n", j);

#pragma region 输入十个数，输出其中最大数  --打擂台法
//int a[10], i, max;
//printf("请输入10个整数\n");
//for ( i = 0; i < 10; i++)//循环往数组里插入数据
//{
//	scanf_s("%d", &a[i]);
//}
//max = a[0];
//for ( i = 1; i < 10; i++)
//{
//	if (max<a[i])//比较数据
//	{
//		max = a[i];
//	}
//}
//printf("最大数是：%d",max);
#pragma endregion

#pragma region 找出10个数中的最大数，将其与第一个数互换
//int a[10], i, max,p,temp;
//printf("请输入10个整数\n");
//for (i = 0; i < 10; i++)//循环往数组里插入数据
//{
//	scanf_s("%d", &a[i]);
//}
//max = a[0];
//for (i = 1; i < 10; i++)
//{
//	if (max < a[i])//比较数据
//	{
//		max = a[i];
//		p = i;
//	}
//}
//printf("最大数是：%d,它的下标位置是：%d,在数组中排第%d个\n", max,p,p+1);
//temp = a[0];
//a[0] = max;
//a[p] = temp;
//printf("最大数与第一个数互换后\n");
//for (i=0; i < 10;i++)
//{
//	printf("\n%d\t", a[i]);//遍历输出互换过数据后的数组
//}
#pragma endregion

#pragma region 用数组处理Fibonacci数列问题，输出前20项  --已知：f[0]=f[1]=1,f[i]=f[i-2]+f[i-1]
	//int i, f[20] = {1,1};
	//for ( i = 2; i < 20; i++)
	//{
	//	f[i] = f[i - 2] + f[i - 1];
	//}
	//for (i = 0; i < 20; i++)
	//{
	//	if (i%5==0)//每输出5个数据换一次行
	//	{
	//		printf("\n");
	//	}
	//	printf("%-10d", f[i]);
	//}
#pragma endregion

#pragma region 冒泡排序
//int array[MAXSIZE];
//int n;
//for (int i = 0; i < MAXSIZE; i++) {
//	array[i] = 0;
//}
//printf("请输入待排关键字个数: ");
//scanf_s("%d", &n);
//printf("请输入关键字: ");
//for (int i = 0; i < n; i++) {
//	scanf_s("%d", &array[i]);
//}//将输入的数据都放到数组里
//BubbleSort(array, n);
//display(array, n);
#pragma endregion

#pragma region 绘制输出直角三角形
//倒右三角
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
//正右三角
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
//正左三角形
//for (int i = 1; i < 5; i++)
//{
//	for (int j = 1; j <= i; j++)
//	{
//		printf("*");
//	}
//	printf("\n");
//}
//倒左三角形
//for (int i = 1; i < 5; i++)
//{
//	for (int j = 1; j <= 5-i; j++)
//	{
//		printf("*");
//	}
//	printf("\n");
//}
#pragma endregion

#pragma region 绘制输出等腰三角形
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

#pragma region 绘制输出菱形
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

#pragma region 编程找出1000之内的所有完数
//int x;
//printf("请问需要找出多少之内的所有完数，请输入一个整数");
//scanf_s("%d",&x);
//for (int i = 1; i <= x; i++)
//{
//	if (IsPerfectNumber(i)) {
//		printf("%d ", i);
//	}
//}
#pragma endregion

#pragma region 输入10个成绩，求平均成绩，将低于平均成绩的分数输出（使用一维数组）
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

#pragma region 输入一行字符，统计其中各个大写字母的出现次数
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
//	printf("%c出现%d次\t",'A'+i,b[i]);
//}

#pragma endregion

#pragma region 选择排序(数字升序)
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
//		if (arr[i] > arr[j])//交换过程
//		{
//			float temp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = temp;
//		}
//	}
//}
//for (int i = 0; i < 10; i++)//输出过程
//{
//	printf("%.2f ", arr[i]);
//}

#pragma endregion

#pragma region 选择排序，数字升序（函数法）
//printf("请输入一串数字");
//int a[10];
//for (int i = 0; i < 10; i++)
//{
//	scanf_s("%d",&a[i]);
//}
//SelectSort(a,10);
//for (int i = 0; i < 10; i++)//输出过程
//{
//	printf("%d ", a[i]);
//}
#pragma endregion


#pragma region 韩信点兵
//问题：
//韩信有一队兵，他想知道有多少人，便让士兵排队报数：
//按从1至5报数，最末一个士兵报的数为1；
//按从1至6报数，最末一个士兵报的数为5；
//按从1至7报数，最末一个士兵报的数为4；
//按从1至11报数，最末一个士兵报的数为10；
//编程求韩信至少有多少兵

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

#pragma region 将二维数组a[N][N]中的元素行列互换，存进本数组a[N][N]中.
//	int a[3][3] = {1,2,3,4,5,6,7,8,9}, temp;
//for (int i = 0; i < 3; i++)
//{
//	for (int j = 0; j < i; j++)//注意：j<i
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

#pragma region 打印输出杨辉三角前十行(二维数组)
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

#pragma region 编写函数，实现字符串连接(把字符串2拼接到字符串1)
//char str1[30], str2[10];
//printf("请输入字符串1");
//gets(str1);
//printf("请输入字符串2");
//gets(str2);
//cats(str1, str2);
//printf("%s",str1);
#pragma endregion

#pragma region 实现获取字符串长度
//char str1[50];
//printf("请输入字符串1\n");
//gets(str1);
//int len=length(str1);
//printf("%s的长度为%d", str1, len);
#pragma endregion 

#pragma region 实现复制字符串
//char str1[30], str2[10];
//printf("请输入字符串1:");
//gets(str1);
//printf("请输入字符串2:");
//gets(str2);
//copy(str1, str2);
//printf("str1=%s,str2=%s",str1,str2);
#pragma endregion

#pragma region 判断一个数是否为回文数(拆分法与构造法)
//printf("请输入一个5位整数：");
//int number = 0;
//scanf_s("%d", &number);
//if (IsPalindromicNumber2(number))
//{
//	printf("Yes Is PalindromicNumber!");
//}
//else
//{
//	printf("Not Is PalindromicNumber!");
//}

#pragma endregion

#pragma region 判断字符串是否为回文
//printf("请输入字符串：");
//char str[50];
//gets(str);
//if (IsPalindromicString(str)) {
//	printf("Yes Is PalindromicString");
//}
//else
//{
//	printf("Not Is PalindromicString");
//}
#pragma endregion

#pragma region 有关指针往年真题
//例 ： 已知数组
//int a[10] = { 1 ， 3 ， 5 ， 7 ， 9 ， 11 ， 13 ， 15 ， 17 ， 19 } ； 请按下列要求用 C 语言编写程序 。
//（ 1 ） 编写函数 void swap(int* arr, int n) { ...... }, 实现将数组 arr 的前 n 个元素逆序排列 。
//（ 2 ） 编写主函数 main() {......} 将数组 a 按原顺序输出后 ， 调用 swap() 对数组 a 的全部元素进行逆序排列 ， 然后再次输出数组 a 。
//int a[10] = { 1 , 3  , 5  , 7  ,9  ,11  , 13  , 15  ,17  , 19 };
//for (int i = 0; i < 10; i++)
//{
//	printf("%d ", a[i]);
//}
//swap(a,10);
//printf("\n");
//for (int i = 0; i < 10; i++)
//{
//	printf("%d ", a[i]);
//}
#pragma endregion

#pragma region 指针实现字符串逆序
//char s[] = "monkey", * p1, * p2, c;
//p1 = p2 = s;
//while (*p2) p2++;
//p2--;
//while (p2 > p1)
//{
//	c = *p1;
//	*p1++ = *p2;
//	*p2-- = c;
//}
//printf("%s", s);
#pragma endregion

#pragma region 指针实现字符串连接（2018年真题）
//char sl[80] = { "Tang"}, s2 [ 80 ] ={"Shan"};
//sss(s2, sl);
//sss(sl,s2);
//puts(sl);
#pragma endregion

#pragma region 编程 用递归和非递归两种方式编写函数 strlength().该函数与库函数 strlen() 功能相同 ,返回参数字符串的长度 ( 整型 ) , 不允许调用任何库函数（真题）
//int a = 0, b = 0;
//char str[80];
//printf("请输入一个字符串:\n");
//gets(str);
////非递归法：
//a = strlength(str);
////递归法：
//b = strlength2(str);
//printf("非递归法求的长度为：%d 递归法求的长度为：%d",a,b);
#pragma endregion

#pragma region 输入5个国家名称并按字母顺序排序后输出(难题)
//void sort(char* name[], int n);//声明sort函数
//void print(char* name[], int n);//声明print函数
//char* name[] = { "CHINA","AMERICA","AUSTRALIA","FRANCE","GERMAN" };
//int n = 5;
//sort(name, n);//排序 交换指向法
//print(name, n);//输出
#pragma endregion


#pragma region 计算机模拟试卷一 选择题错题验证过程
//char a = "\\\"ABC\"\\";

//int x , * p = &x;
//printf("%d %d %d %d %d", &*p,p,&x,*p,x);//输出(随机数):2095844 2095844 2095844 -858993460 -858993460

//int a=1,b=2, c = 2,t;
//while (a<b<c)//此循环会遍历两次
//{
//	t = a;
//	a = b;
//	b = t;
//	c -- ;
//}
//printf("%d %d %d",a,b, c);

//int i;
//for ( i =2; i ==0;)//不执行循环体
//{
//	printf("%d", i--);
//}

//int x = 5, a = 0, b = 0;
//if (x=a+b)//x被赋值为0 ；0为假 则进入else分支
//{
//	printf("****\n");
//}
//else
//{
//	printf("####\n");
//}

//对于赋值表达式E1=E2，其中E1必须是可修改的左值，E2是右值
//int a, b , c;
//a = 7 + b + c = a + 7;//报错：表达式必须是可修改的左值。
//a = 7 + b, c = a + 7; //报错：使用未初始化的内存b，b在这里不是被赋值的变量
#pragma endregion

#pragma region 计算机模拟试卷一 程序阅读题 错题验证过程
//第一题
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

//第二题
//char line[] = "12345";//注意：line 和line[]有区别
//int i, k = strlen(line); //strlen()函数（使用该函数需要引入 #include <string.h>）  --计算数组line的长度 到\0结束
//for ( i = 0; i < 4; i++)
//{
//	line[k - i]='\0';
//	puts(line+i);//以line指针顺移i位开始打印至"\0"前结束（不包括‘\0"） 
//}

//第三题
//int j = 1, m = 1, k;
//k = fun(j, m); printf("%3d", k);
//k = fun(j, m); printf("%3d", k);

//第四题
//printf("%d", f(6));
//printf("\n%d", sum);//执行了25次f()方法
//printf("\n%d", a);//执行了25次f()方法中n==0分支
//printf("\n%d", b);//执行了25次f()方法中n==1分支
#pragma endregion




}



