#define _CRT_SECURE_NO_WARNINGS 1
//
#include <string.h>
#include <stdio.h>
//
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
//	int i = 0;
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
//int main()
//{
//	int i = 0;
//	//   初始化  判断    调整
//	for (i = 1; i <= 10; i++)           //for简单应用
//	{ 
//		printf("%d", i);
//	}
//	return 0;
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