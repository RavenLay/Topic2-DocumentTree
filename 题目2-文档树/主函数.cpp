#include "���ݽṹ.h"

int main()
{
	//�������󣬵��ù��캯��ʵ�ֹ���һ
	Tree T;

	//����ѡ�����(������)
	int flag = 0;
	cout << "Please input your choice" << endl;
	cin >> flag;

	//����ִ��
	if(flag == 1)//���ܶ�
	{
		T.Insert();
	}
	else if (flag == 2)//������
	{
		T.SearchAndPrintLable();
	}
	else if (flag == 3)//������
	{
		T.SearchAndPrintTxt();
	}
	return 0;
}