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
//	//δ�����ı�ʶ��
//	//����extern�ⲿ���ŵ�
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
//	//����2�����ĺ�
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//��������-ʹ�����뺯��scanf
//	scanf("%d%d",&num1,&num2);//ȡ��ַ����&
//	//C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
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
//	//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ��������ͬ������bug
//	//���ֲ�������ȫ�ֱ�����������ͬ��ʱ�򣬾ֲ�����Ҫ����
//	printf("%d\n", a);
//	return 0;
//}

//int num2 = 20;//ȫ�ֱ���-�����ڴ����({})֮��ı���
//int main(void)
//{
//	int num = 10;//�ֲ�����-�����ڴ����({})֮�ڵı���
//
//	return 0;
//}

//int main(void)
//{
//	short age = 20;//���ڴ�����2�ֽ�=16bitλ���������20
//	float weight = 95.6f;//���ڴ�������4���ֽڣ����С��
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
//	short int age = 20;//2�ֽ�
//	return 0;
//}