#define _CRT_SECURE_NO_WARNINGS 1
//
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("**************************\n");
	printf("**** 1.play    0.exit ****\n");
	printf("**************************\n");
}
void game()
{
	int ret = 0;
	int guess = 0;
	srand((unsigned int)time(NULL));
	//ʱ���
	ret = rand()%100+1;
	while (1)
	{
		printf("�²�����:>");                              //�򵥵Ĳ�������Ϸ
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С�� \n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
	printf("%d\n", ret);
}
int main()
{
	int input = 0;
	do 
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}


	} while (input);
	return 0;
}


















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