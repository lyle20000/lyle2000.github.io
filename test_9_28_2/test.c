#include<stdio.h>
#include<math.h>
//squrt是数学库函数，开平方，math.h
//写一个函数可以判断一个数是不是素数
//打印100～200之间的素数
//素数是只能被1和它本身整除的数
//7
//1和7整除
//2 3 4 5 6 

int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i += 2)
	{
		//判断i是否为素数
		//是素数就打印
		//拿2～i-1之间的数字去试除i
		int flag = 1;//flag是1表示是素数
		int j = 0;
		for (j = 2; j <= sqrt(1); j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			count++;
			printf("%d ", i);
		}
			
	}
	printf("\ncount = %d\n", count);
	return 0;
}