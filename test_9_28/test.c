#include<stdio.h>

//函数的定义
//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//
//}

//void test()
//{
//	printf("hehe\n");
//无返回值
//}

//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//求较大值
//	//函数的调用
//	int m = get_max(a, b);
//	printf("%d\n", m);
//
//
//	return 0;
//}
//写一个函数可以交换两个整形变量的内容

void Swap(int *px, int *py)
{
	int z = *px;
	*px = *py;
	*py = z;
	
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	//交换
	printf("交换前:a=%d b=%d\n", a, b);
	Swap(&a, &b);//不需要返回
	printf("交换后:a=%d b=%d\n", a, b);
	return 0;
}
