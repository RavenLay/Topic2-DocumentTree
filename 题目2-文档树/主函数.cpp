#include "���ݽṹ.h"

int main()
{
	//����һ
	Tree* T;
	T->CreateTreeAndPrint(T);

	//����ѡ�����(������)
	int flag = 0;
	cout << "Please input your choice";
	cin >> flag;

	//����ִ��
	if(flag == 1)//���ܶ�
	{
		T->Insert(T);
	}
	else if (flag == 2)//������
	{
		T->SearchAndPrintLable(T);
	}
	else if (flag == 3)//������
	{
		T->SearchAndPrintTxt(T);
	}
	return 0;
}