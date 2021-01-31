#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//
//int main(void)
//{
//	{
//		int a = 10;
//		printf("a=%d\n", a);//ok
//	}
//	printf("a=%d\n", a);//error
//	return 0;
//}

//int main(void)
//{
//	//未声明的标识符
//	//声明extern外部符号的
//	extern int g_val;
//	printf("g_val=%d", g_val);
//	return 0;
//}
//int global = 2021;
//
//void test()
//{
//	printf("test()--%d\n", global);
//}
//
//int main(void)
//{
//	test();
//	printf("%d", global);
//	return 0;
//}

//int main(void)
//{
//	int num = 0;
//	printf("num=%d", num);
//	return 0;
//}
//int main(void)
//{
//	//计算2个数的和
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//输入数据-使用输入函数scanf
//	scanf("%d%d",&num1,&num2);//取地址符号&
//	//C语言语法规定，变量要定义在当前代码块的最前面
//	sum=num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main(void)
//{
//		int a = 10;
//	printf("%d\n", a);
//	return 0;
//}

//int a = 100;
//int main(void)
//{
//	int a = 10;
//	//局部变量和全局变量的名字建议不要相同，容易相同误会产生bug
//	//当局部变量和全局变量的名字相同的时候，局部变量要优先
//	printf("%d\n", a);
//	return 0;
//}

//int num2 = 20;//全局变量-定义在代码块({})之外的变量
//int main(void)
//{
//	int num = 10;//局部变量-定义在代码块({})之内的变量
//
//	return 0;
//}

//int main(void)
//{
//	short age = 20;//向内存申请2字节=16bit位，用来存放20
//	float weight = 95.6f;//向内存你申请4个字节，存放小数
//	return 0;
//}

//int main(void)
//{
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(long));//4,8
//	printf("%d\n", sizeof(double));//8
//	
//	short int age = 20;//2字节
//	return 0;
//}