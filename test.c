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
//	//����ȫ
//	//strcpy_s
//
//	sum = num1 + num2;
//	printf("%d", sum);
//	return 0;
//}

//int main(void)
//{
//	//const - ������
//	const int num = 4;//const���εĳ�����
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);
//	3;//���泣��
//	100;
//	3.14;
//	return 0;
//}

//int main(void)
//{
//	const int n = 10;//n �Ǳ������������г����ԣ���������˵n��һ�ֳ�����
//	int arr[10] = {0};//[]�������볣��
//	return 0;
//}

////#define ����ı�ʶ������
//#define MAX 10
//
//int main(void)
//{
//	int arr[MAX] = {0};
//	printf("%d\n", MAX);
//	return 0;
//}

//ö�ٳ���
//ö��-һһ�о�
//�Ա�:�У�Ů������
//��ԭɫ:�죬�ƣ���
//���ڣ�1,2,3,4,5,6,7

//ö�ٹؼ���-enum
//enum Sex
//{
//	male,
//	female,
//	secret
//};
////male,female,secret  - ö�ٳ���
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

//�ַ���
//"hello world"
//int main(void)
//{
//	//�����ڼ�����ϴ洢��ʱ�򣬴洢���Ƕ�����
//	char arr1[] = "abc";//����
//	//"abc"--'a','b','c','\0'--'\0'�ַ����Ľ�����־
//	char arr2[] = {'a','b','c','\0'};//\0�ǽ�����
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//int main(void)
//{
//	char arr1[] =  "abc";
//	char arr2[] = {'a','b','c'};
//	printf("%d\n", strlen(arr1));//strlen - string length - �����ַ�������
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main(void)
//{
//	printf("abc\n"); //\n ת���ַ�:����
//	return 0;
//}

//int main(void)
//{
//	printf("c:\test\32\test.c");
//	//\t:ˮƽָ���
//	return 0;
//}

//int main(void)
//{
//
//	//printf("%d\n", strlen("c:\test\32\test.c"));//\tΪһ��ת���ַ� \32 �������˽�������
//	printf("%c\n", '\x61');// \������xʱΪʮ�����ƣ���û�У���Ϊ�˽���
//	return 0;																						//32��Ϊ�˽��ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
//}			//32 >ʮ����26->��ΪASCII��ֵ������ַ�
//

//ѡ�����
//int main(void)
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��?(1/0)>:\n");
//	scanf("%d", &input);//1/0
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//	return 0;
//}

//ѭ�����
//int main(void)
//{
//	int line = 0;
//	printf("�������\n");
//
//	while (line < 20000)
//	{
//		printf("��һ�д���:%d\n",line);
//		line++;
//	}
//	if(line>=20000)
//	printf("��offer\n");
//	return 0;
//}

//����
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
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//����һ�����10���������ֵ�����
//	//0-9
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	//char ch[20];
//	//float arr[10];
//	//printf("%d\n",arr[4]);//ʹ���±�ķ�ʽ����Ԫ�� arr[�±�]
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
//	//��(������)λ������
//	//<<����
//	//>>����
//	int a = 1;
//	//����1ռ4���ֽ�-32��bitλ
//	int b=a << 1;
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}

//int main(void)
//{
//	//(������)λ����
//	//&��λ��(����)
//	//��ļ������:
//	//��Ӧ�Ķ�����λ���죬��Ϊ0
//	//��Ӧ�Ķ�����λ��ͬ����Ϊ1
//	//|��λ�� (����)
//	//��ļ������:
//	//��Ӧ�Ķ�����λ����1����Ϊ1
//	//��Ӧ�Ķ�����λ����1����Ϊ0
//	//^ ��λ���
//	//���ļ������:
//	//��Ӧ�Ķ�����λ��ͬ����Ϊ0
//	//��Ӧ�Ķ�����λ���죬��Ϊ1
//	int a = 3; //011
//	int b = 5; //101
//	int c = a ^ b;
//	printf("%d\n", c);
//	return 0;
//}


//int main(void)
//{
//	int a = 10;
//	a = 20;//= ��ֵ  ==�ж����
//	a = a + 10;//�ȼ���a += 10;
//	                 //			a -= 20;
//	a &= 2;
//	//���ϸ�ֵ��
//	//+= -= *= /= %= <<= >>= &= |= ^=
//	return 0;
//}

//��Ŀ������
//˫Ŀ������
//��Ŀ������
//int main(void)
//{
//	//int a = 0;
//	//int b = 20;
//	//a + b;//+ ������  ˫Ŀ������
//	//C�����б�ʾ���
//	//0 - �� һ�еķ�0 - ��
//	int a = -2;
//	int b = -a;
//	int c = +3;//+ ���Ŷ���ʡ��
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//}
//
//int main(void)
//{
//	int arr[10] = { 0 };//10������Ԫ�ص�����
//	int sz = 0;
//	//10*sizeof(int)=40
//	printf("%d\n", sizeof(arr));
//	//���������Ԫ�ظ���
//	//�����ܴ�С/ÿ��Ԫ�صĴ�С=����
//	sz=sizeof(arr) / sizeof(arr[0]);
//	printf("sz = %d\n", sz);
//	//int a = 10;
//	////sizeof ������Ǳ���/������ռ�ռ�Ĵ�С,��λ���ֽ�
//	//printf("%d\n", sizeof(a));//4
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof a);
//// err:	printf("%d\n", sizeof int);
//	return 0;
//}