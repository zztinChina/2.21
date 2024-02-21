#include<stdio.h>
int math(int n)
{
	int b = n;
	int count = 0;
	while (1)
	{
		if (b / 8 > 0)
		{
			count++;
			b = b / 8;
		}
		if (b / 8 == 0)
		{
			//	i = n % 8;
			break;
		}
	}
	int tem = 10;
	int pre = 8;
	int shijinzhi = 10;
	int i = 0;
	for (i = 1; i < count; i++)
	{
		pre = pre * 8;
	}
	//printf("%d", pre);
	for (i = 1; i < count; i++)
	{
		shijinzhi = shijinzhi * 10;
	}
	if (count == 0)
	{
		pre = 1;
		shijinzhi = 1;
		return n;
	}
	//计算最高位上的具体数目
	tem = n / pre;
	return tem * shijinzhi + math(n - tem * pre);
}
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int hehe=math(n);
		//math函数，传入最高位，计算最高位的代表值，比如count=2；
		//最高位代表的值就是64；假如n等于66；下一次应该计算66-64*1；
		//   int hehe=math(n, count);
		//   printf("%d", hehe);
	printf("%d", hehe);
}