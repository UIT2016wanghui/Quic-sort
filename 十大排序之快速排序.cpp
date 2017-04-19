
/*************************************************************************
> ��Ŀ���ƣ�ʮ������֮��������
> ���ߣ�����
> ʱ�䣺2017/2/13
> ���뻷����vs2013
************************************************************************/
#include<iostream>
using namespace std;

int partion1(int a[], int left, int right)
{

	int tmp = a[left];//�ؼ�Ԫ��tmp
	while (left < right)
	{
		while ((tmp <= a[right]) && (left < right))
			right--;//���������ҵ�һ���ȹؼ�Ԫ��С
		a[left] = a[right];
		while ((tmp > a[left]) && (left < right))
			left++;//���������ҵ�һ���ȹؼ�Ԫ�ش�
		a[right] = a[left];
	}
	a[left] = tmp;//��ߵ�Ԫ��Ϊ�ؼ�Ԫ��
	return left;//������ߵ����
}
void quicksort1(int a[], int left, int right)
{
	int p;
	if (left< right)
	{
		p = partion1(a, left, right);//���»��ֻ���
		quicksort1(a, left, p - 1);//��߿�������
		quicksort1(a, p + 1, right);//�ұ߿�������
	}
}

int main()
{
	int i;
	int a[10] = { 0 };
	cout << "������ʮ������" << endl;
	for (i = 0; i < 10; i++)
		cin >> a[i];
	quicksort1(a, 0, 9);//���ú���quicksort1
	cout << "�������򷽷�1 :" << endl;
	for (i = 0; i<10; i++)
		cout << a[i] << "\t";
	cout << endl;
	return 0;
}
