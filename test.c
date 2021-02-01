#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main(void)
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//
//
//	//scanf
//	//strcpy
//	//strlen
//	//...
//	//不安全
//	//strcpy_s
//
//	sum = num1 + num2;
//	printf("%d", sum);
//	return 0;
//}

//int main(void)
//{
//	//const - 常属性
//	const int num = 4;//const修饰的常变量
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);
//	3;//字面常量
//	100;
//	3.14;
//	return 0;
//}

//int main(void)
//{
//	const int n = 10;//n 是变量，但是又有常属性，所以我们说n是一种常变量
//	int arr[10] = {0};//[]中需输入常量
//	return 0;
//}

////#define 定义的标识符常量
//#define MAX 10
//
//int main(void)
//{
//	int arr[MAX] = {0};
//	printf("%d\n", MAX);
//	return 0;
//}

//枚举常量
//枚举-一一列举
//性别:男，女，保密
//三原色:红，黄，蓝
//星期：1,2,3,4,5,6,7

//枚举关键字-enum
//enum Sex
//{
//	male,
//	female,
//	secret
//};
////male,female,secret  - 枚举常量
//int main(void)
//{
//	//enum Sex s = male;
//	printf("%d\n", male);//0
//	printf("%d\n", female);//1
//	printf("%d\n", secret);//2
//	return 0;
//}

//enum Color
//{
//	red,
//	blue,
//	yellow
//};
//
//int main(void)
//{
//	enum Color color = blue;
//	color = yellow;
//	//blue = 6;//err
//	return 0;
//}

//字符串
//"hello world"
//int main(void)
//{
//	//数据在计算机上存储的时候，存储的是二进制
//	char arr1[] = "abc";//数组
//	//"abc"--'a','b','c','\0'--'\0'字符串的结束标志
//	char arr2[] = {'a','b','c','\0'};//\0是结束符
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//int main(void)
//{
//	char arr1[] =  "abc";
//	char arr2[] = {'a','b','c'};
//	printf("%d\n", strlen(arr1));//strlen - string length - 计算字符串长度
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main(void)
//{
//	printf("abc\n"); //\n 转义字符:换行
//	return 0;
//}

//int main(void)
//{
//	printf("c:\test\32\test.c");
//	//\t:水平指表符
//	return 0;
//}

//int main(void)
//{
//
//	//printf("%d\n", strlen("c:\test\32\test.c"));//\t为一个转义字符 \32 是两个八进制数字
//	printf("%c\n", '\x61');// \后面有x时为十六进制，若没有，则为八进制
//	return 0;																						//32作为八进制代表的那个十进制数字，作为ASCII码值，对应的字符
//}			//32 >十进制26->作为ASCII码值代表的字符
//

//选择语句
//int main(void)
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗?(1/0)>:\n");
//	scanf("%d", &input);//1/0
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}

//循环语句
//int main(void)
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while (line < 20000)
//	{
//		printf("敲一行代码:%d\n",line);
//		line++;
//	}
//	if(line>=20000)
//	printf("好offer\n");
//	return 0;
//}

//函数
//int Add(int x, int y)
//{
//	int z=x + y;
//	return z;
//}
//int main(void)
//{
//	int num1=10;
//	int num2=20;
//	int sum = 0;
//	int a=100;
//	int b=200;
//	//sum = num1+num2;
//	sum = Add(num1, num2);
//	//sum = a+b;
//	sum = Add(a, b);
//	sum = Add(2, 3);
//	printf("sum = %d", sum);
//	return 0;
//}

//int main(void)
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//int d = 4;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个存放10个整型数字的数组
//	//0-9
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	//char ch[20];
//	//float arr[10];
//	//printf("%d\n",arr[4]);//使用下标的方式访问元素 arr[下标]
//	return 0;
//}

//int main(void)
//{
//	int a = 5 % 2;
//	printf("%d\n", a);
//	return 0;
//}

//int main(void)
//{
//	//移(二进制)位操作符
//	//<<左移
//	//>>右移
//	int a = 1;
//	//整型1占4个字节-32个bit位
//	int b=a << 1;
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}

//int main(void)
//{
//	//(二进制)位操作
//	//&按位与(并且)
//	//与的计算规律:
//	//对应的二进制位相异，则为0
//	//对应的二进制位相同，则为1
//	//|按位或 (或者)
//	//或的计算规律:
//	//对应的二进制位若有1，则为1
//	//对应的二进制位若无1，则为0
//	//^ 按位异或
//	//异或的计算规律:
//	//对应的二进制位相同，则为0
//	//对应的二进制位相异，则为1
//	int a = 3; //011
//	int b = 5; //101
//	int c = a ^ b;
//	printf("%d\n", c);
//	return 0;
//}


//int main(void)
//{
//	int a = 10;
//	a = 20;//= 赋值  ==判断相等
//	a = a + 10;//等价于a += 10;
//	                 //			a -= 20;
//	a &= 2;
//	//复合赋值符
//	//+= -= *= /= %= <<= >>= &= |= ^=
//	return 0;
//}

//单目操作符
//双目操作符
//三目操作符
//int main(void)
//{
//	//int a = 0;
//	//int b = 20;
//	//a + b;//+ 操作符  双目操作符
//	//C语言中表示真假
//	//0 - 假 一切的非0 - 真
//	int a = -2;
//	int b = -a;
//	int c = +3;//+ 正号都会省略
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//}
//
//int main(void)
//{
//	int arr[10] = { 0 };//10个整型元素的数组
//	int sz = 0;
//	//10*sizeof(int)=40
//	printf("%d\n", sizeof(arr));
//	//计算数组的元素个数
//	//数组总大小/每个元素的大小=个数
//	sz=sizeof(arr) / sizeof(arr[0]);
//	printf("sz = %d\n", sz);
//	//int a = 10;
//	////sizeof 计算的是变量/类型所占空间的大小,单位是字节
//	//printf("%d\n", sizeof(a));//4
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof a);
//// err:	printf("%d\n", sizeof int);
//	return 0;
//}