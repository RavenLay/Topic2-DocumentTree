#include <iostream>
using namespace std;

#include "������.h"

int main()
{
	//����ѡ�����(������)
	int flag = 0;
	cout << "Please input your choice";
	cin >> flag;
	Tree T;
	if (flag==1)//����һ
	{
		T.CreateTreeAndPrint(T);
	}
	else if(flag == 2)//���ܶ�
	{
		T.Insert(T);
	}
	else if (flag == 3)//������
	{
		T.SearchAndPrintLable(T);
	}
	else if (flag == 4)//������
	{
		T.SearchAndPrintTxt(T);
	}
	return 0;
}