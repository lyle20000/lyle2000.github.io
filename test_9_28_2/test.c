#include<stdio.h>
#include<math.h>
//squrt����ѧ�⺯������ƽ����math.h
//дһ�����������ж�һ�����ǲ�������
//��ӡ100��200֮�������
//������ֻ�ܱ�1����������������
//7
//1��7����
//2 3 4 5 6 

int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i += 2)
	{
		//�ж�i�Ƿ�Ϊ����
		//�������ʹ�ӡ
		//��2��i-1֮�������ȥ�Գ�i
		int flag = 1;//flag��1��ʾ������
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