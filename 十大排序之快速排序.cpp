
/*************************************************************************
> 项目名称：十大排序之快速排序
> 作者：王辉
> 时间：2017/2/13
> 编译环境：vs2013
************************************************************************/
#include<iostream>
using namespace std;

int partion1(int a[], int left, int right)
{

	int tmp = a[left];//关键元素tmp
	while (left < right)
	{
		while ((tmp <= a[right]) && (left < right))
			right--;//从右向左找第一个比关键元素小
		a[left] = a[right];
		while ((tmp > a[left]) && (left < right))
			left++;//从左向右找第一个比关键元素大
		a[right] = a[left];
	}
	a[left] = tmp;//左边的元素为关键元素
	return left;//返回左边的序号
}
void quicksort1(int a[], int left, int right)
{
	int p;
	if (left< right)
	{
		p = partion1(a, left, right);//重新划分划分
		quicksort1(a, left, p - 1);//左边快速排序
		quicksort1(a, p + 1, right);//右边快速排序
	}
}

int main()
{
	int i;
	int a[10] = { 0 };
	cout << "请输入十个数：" << endl;
	for (i = 0; i < 10; i++)
		cin >> a[i];
	quicksort1(a, 0, 9);//调用函数quicksort1
	cout << "快速排序方法1 :" << endl;
	for (i = 0; i<10; i++)
		cout << a[i] << "\t";
	cout << endl;
	return 0;
}
