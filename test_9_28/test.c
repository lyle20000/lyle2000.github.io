#include<stdio.h>

//�����Ķ���
//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//
//}

//void test()
//{
//	printf("hehe\n");
//�޷���ֵ
//}

//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//��ϴ�ֵ
//	//�����ĵ���
//	int m = get_max(a, b);
//	printf("%d\n", m);
//
//
//	return 0;
//}
//дһ���������Խ����������α���������

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
	//����
	printf("����ǰ:a=%d b=%d\n", a, b);
	Swap(&a, &b);//����Ҫ����
	printf("������:a=%d b=%d\n", a, b);
	return 0;
}
