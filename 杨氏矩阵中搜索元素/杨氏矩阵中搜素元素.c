#include<stdio.h>
#include<stdlib.h>
#define N 3

//������
//�����ϵ����¿�ʼ������������ʱ�临�Ӷ��� O(n^2);
//���ѡ������Ͻǿ�ʼ������
//��1����������������ִ��ڴ�λ�õ����֣���ֻ��Ҫ������������
//��2�����������������С�ڴ�λ�õ����֣���ֻ��Ҫ������������

int find(int a[N][N],int x)
{
	int i, j;
	//�����Ͻǿ�ʼ����
	for (i = 0, j = N - 1; i < N, j >= 0;)
	{
		if (x > a[i][j])
		{
			++i;
		}
		else if(x < a[i][j])
		{
			--j;
		}
		else if(x == a[i][j])
		{
			printf("�ҵ������֣�%d��%d��\n", i + 1, j + 1);
			break;
		}
	}
	if (i >= N || j < 0)
	{
		printf("δ�ҵ������֣�����\n");
	}
	return 0;
}

int main()
{
	int a[N][N] = { 1,2,3,4,5,6,7,8,9 };
	find(a, 10);
	system("pause");
	return 0;
}