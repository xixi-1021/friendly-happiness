#define _CRT_SECURE_NO_WARNINGS 1
//
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;                          //�ݹ龭����ջ���
		n--;
	}
	return c;                                  //��쳲��������и���

}


int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("ret = %d\n", ret);

	return 0;
}


//int Fib(int n)
//{
//	if (n <=2)
//	{
//		return 1;
//	}
//	else                                           //쳲��������е��ǲ�����
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}





//
//
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);            //������׳�
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}
//
////int my_strlen(char* str)
////{
////	if (*str != '\0')
////		return 1 + my_strlen(str + 1);                               // �Զ���2.0
//	else          
//		return 0;
//}
//
//
//
//int main()
//{
//
//	char arr[] = "bittttt";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//
//	return 0;
//}





//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;                                          //�Զ��庯��
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//
//	char arr[] = "bittttt";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//
//	return 0;
//}






//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);                       //�򵥵ݹ�
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d",  &num);
//	print(num);
//	return 0;
//}


//int main()
//{
//	printf("%d",printf("%d",printf("43")));                   //.h������һ��ͷ�ļ��У�    .c���壬   ��������ʹ��
//	return 0;
//}





//int binary_search(int arr[], int k, int sz)
//
//{
//	 
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;               //��Ҫ�ĺ����Ķ��ֲ���
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ�������� \n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//
//}
//









//int is_leap_year(int y)
//{
//	if((y%4==0&&y%100!=0)|| (y%400==0))                    //��ӡ����
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//


//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//		{
//			if (n % j == 0)
//				return 0;                         //is_prime��ӡ���� 
//	     }
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//// 
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;;
//}
//void Swap2(int* pa, int* pb)                  //��ʵ�δ����β�ʱ
//                                              //�β�ֻ��ʵ�ε�һ����ʱ����
//	                                          //���βε��޸Ĳ���ı�ʵ��   
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;                        //ab����
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	Swap1(a, b);
//	Swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);               //<----��ͬab
//	return 0;
//}
//// 
//// 
//// 
//// 
//// 
//// 
//void menu()
//{
//	printf("**************************\n");
//	printf("**** 1.play    0.exit ****\n");
//	printf("**************************\n");
//}
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	srand((unsigned int)time(NULL));
//	//ʱ���
//	ret = rand()%100+1;
//	while (1)
//	{
//		printf("�²�����:>");                              //�򵥵Ĳ�������Ϸ
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С�� \n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//	printf("%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	do 
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//
//
//	} while (input);
//	return 0;
//}
//
//
//















//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)                           //��ӡ99�˷���
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
// 
// 
// 
// 
////int main()
////{
//	int i = 0;
//	double sum = 0.0;
//	int shu = 1;
//	for (i = 1; i <= 100; i++)                 //��1/1-1/2+.......-1/100
//	{
//		sum += shu * 1.0 / i;
//		shu = -shu;
//	}
//	printf("%lf\n", sum);
//	return 0;
// 
// 
// 
// 
// 
//}
////int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//
//		for (j = 2; j < i; j++)                       //��ӡ����
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//			
//		}
//		if (j == i)
//		{
//			printf("%d\n", i);
//		}
//	}
 /*}*/
//{
//	int i = 0;
//	for (i; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		 printf("%d ", i);               // 3 �Ĺ�����
//	}
//	return 0;
// 
// 
// 
// 
// 
// 
// 
// 
//}
////int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);                   //���������Ĵ�С
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d%d%d", a, b, c);
//	return 0;
//}
//

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz-1;
//	while(left <= right)
//	{
//		int mid = (left + right) / 2;                    //���ַ�
//		if (arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else if(arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	return 0;
//}
////
//int main()
////{
//	int i = 0;
//	int n = 0;
//	
//	int ret = 1;
//	scanf("%d", &n);
//                   
//	for (i = 1; i <= n; i++)                 ��n�Ľ׳�
//	{
//		ret = ret * i;
//	}
//	printf("ret =%d\n", ret); 
//	return 0;
//}


//int main()
//{
//	 int i = 0;
//	do
//	{
//		printf("%d\n", i);                       //do while easy
//		i++;
//	} while (i <= 10);
//	return 0;
//
//int main()
//
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++);                           //for��������ʡ��
//		printf("hehe \n");
//
//	}
//	return 0;
//}
// 
// 
// 
// 
//int main()
//{
//	int i = 0;
//	//   ��ʼ��  �ж�    ����
//	for (i = 1; i <= 10; i++)           //for��Ӧ��
//	{ 
// 
// 
//		printf("%d", i);
//	}
//	return 0;
// 
// 
// 
//}
////int main()
//{
//	int ret = 0; 
//	int ch = 0;
//	char password[20] = { 0 };
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n')              //while ѭ���ľ���ʹ�ã�ʹ��һֱ����\n	
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}
//



//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)           //getchar,putcharӦ�ã�EOF��⣬ctrl+z �˳�
//	{
//		putchar(ch);
//		
//	}
//	return 0;
//}
//






//int main() 
//{
//	int i = 0;
//	while (i <= 10)  //ѭ�����
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//		
//	}
//
//	return 0;
//}
////int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");      //switch���
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	default:
//		printf("wrong\n");
//		break;
//
//
//	}
//	return 0;
//}

//
//int main()
//{
//	int i = 1;
//	while (i <= 200)                 //ѡ������
//	{
//		if (i % 2 == 1)
//			printf("%d " ,i);
//		i++;
//	}
//	return 0;
//}
//struct SZDX
//{
//	char name[20];
//	char want[20];
//};
//int main()
//{
//	struct SZDX a1 = { "��ղղȥcicf" ,"��������" };
//	printf("�̿���Ҫ��ʲô:%s\n", a1.name);                         //��ϰstruct �ṹ���
//	printf("��Ҫ��:%s\n", a1.want);
//	return 0;
//}
//int main()
//{
//	double d = 3.11;
//	double* pd = &d;
//	*pd = 9.9;
//	printf("%d\n",sizeof( d));                                    //ָ�����
//	return 0;
//}
//







//#define Max(x,y) (x?y,x:y);
//int main()
//{ 
//	int a = 233;
//	int b = 432;
//	int max = Max(a, b);
//    printf("max =%d\n" ,max)                            //define   �Ƚϴ�С
//
//	return 0;
//}
















//
////#define Max(x,y) (x.y?x:y);
//int main()
//{
//	int a = 76;
//	int b = 99;
//	int max = 0;
//
//	int max(a . b? a : b);                                      //define   �Ƚϴ�С
//	if (a > b)
//		printf("%d\n", a);
//	else
//		printf("%d\n", b);
//	printf("max = %d\n", max);
//	return 0;
//}
//




//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c\n" ,ch);
//	return 0;                                                  //�ַ���С


//#define Max(x,y) (x?y:x,y);
//int main()
//{
//	int a = 100;
//	int b = 200;                                                //��С
//	int max = Max(a, b);
//	printf("max= %d\n", max);
//	return 0;
//}

//int main(
//	{
//		int a = 100;
//         
// 
//
//		return 0                                              //�������
//	}
//)
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//
//}
//
//int main()
//{
//	int num1 = 100;
//	int num2 = 2000;
//	int max = 0;
//	max = Max(num1, num2);                                                  //�������
//	printf("max =%d\n", max);
//	return 0;
//}
//void test()
//{
//	static int a = 2;
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}