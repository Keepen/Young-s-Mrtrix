#include<stdio.h>
#include<stdlib.h>
#define N 3

//分析：
//从左上到右下开始遍历，遍历的时间复杂度是 O(n^2);
//因此选择从右上角开始遍历：
//（1）如果被搜索的数字大于此位置的数字，则只需要向下搜索即可
//（2）如果被搜索的数字小于此位置的数字，则只需要向左搜索即可

int find(int a[N][N],int x)
{
	int i, j;
	//从右上角开始遍历
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
			printf("找到此数字：%d行%d列\n", i + 1, j + 1);
			break;
		}
	}
	if (i >= N || j < 0)
	{
		printf("未找到该数字！！！\n");
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