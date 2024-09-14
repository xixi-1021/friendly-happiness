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
		b = c;                          //递归经常会栈溢出
		n--;
	}
	return c;                                  //求斐波那契数列更好

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
//	else                                           //斐波那契数列但是不好用
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
//		return n * Fac(n - 1);            //递推求阶乘
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
////		return 1 + my_strlen(str + 1);                               // 自定义2.0
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
//		count++;                                          //自定义函数
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
//	printf("%d ", n % 10);                       //简单递归
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
//	printf("%d",printf("%d",printf("43")));                   //.h声明（一般头文件中）    .c定义，   先声名再使用
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
//		int mid = (left + right) / 2;               //重要的函数的二分查找
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
//		printf("找不到指定的数字 \n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//
//}
//









//int is_leap_year(int y)
//{
//	if((y%4==0&&y%100!=0)|| (y%400==0))                    //打印闰年
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
//				return 0;                         //is_prime打印素数 
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
//void Swap2(int* pa, int* pb)                  //当实参传给形参时
//                                              //形参只是实参的一份临时拷贝
//	                                          //对形参的修改不会改变实参   
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;                        //ab交换
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	Swap1(a, b);
//	Swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);               //<----不同ab
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
//	//时间戳
//	ret = rand()%100+1;
//	while (1)
//	{
//		printf("猜猜数字:>");                              //简单的猜数字游戏
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了 \n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
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
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
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
//		for (j = 1; j <= i; j++)                           //打印99乘法表
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
//	for (i = 1; i <= 100; i++)                 //算1/1-1/2+.......-1/100
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
//		for (j = 2; j < i; j++)                       //打印素数
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
//		 printf("%d ", i);               // 3 的公倍数
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
//	scanf("%d%d%d", &a, &b, &c);                   //求三个数的大到小
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
//		int mid = (left + right) / 2;                    //二分法
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
//			printf("找到了，下标是：%d\n", mid);
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
//	for (i = 1; i <= n; i++)                 算n的阶乘
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
//		for (; j < 10; j++);                           //for不可随意省略
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
//	//   初始化  判断    调整
//	for (i = 1; i <= 10; i++)           //for简单应用
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
//	while ((ch = getchar()) != '\n')              //while 循环的具体使用，使其一直跳过\n	
//		;
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}
//



//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)           //getchar,putchar应用，EOF理解，ctrl+z 退出
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
//	while (i <= 10)  //循环语句
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
//		printf("星期一\n");      //switch语句
//		break;
//	case 2:
//		printf("星期二\n");
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
//	while (i <= 200)                 //选择奇数
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
//	struct SZDX a1 = { "让詹詹去cicf" ,"报销所有" };
//	printf("蔡可章要做什么:%s\n", a1.name);                         //练习struct 结构语句
//	printf("想要的:%s\n", a1.want);
//	return 0;
//}
//int main()
//{
//	double d = 3.11;
//	double* pd = &d;
//	*pd = 9.9;
//	printf("%d\n",sizeof( d));                                    //指针初步
//	return 0;
//}
//







//#define Max(x,y) (x?y,x:y);
//int main()
//{ 
//	int a = 233;
//	int b = 432;
//	int max = Max(a, b);
//    printf("max =%d\n" ,max)                            //define   比较大小
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
//	int max(a . b? a : b);                                      //define   比较大小
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
//	return 0;                                                  //字符大小


//#define Max(x,y) (x?y:x,y);
//int main()
//{
//	int a = 100;
//	int b = 200;                                                //大小
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
//		return 0                                              //条件语句
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
//	max = Max(num1, num2);                                                  //条件语句
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