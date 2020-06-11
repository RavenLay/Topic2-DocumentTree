#include "数据结构.h"

int main()
{
	//功能一
	Tree* T;
	T->CreateTreeAndPrint(T);

	//功能选择界面(待美化)
	int flag = 0;
	cout << "Please input your choice";
	cin >> flag;

	//功能执行
	if(flag == 1)//功能二
	{
		T->Insert(T);
	}
	else if (flag == 2)//功能三
	{
		T->SearchAndPrintLable(T);
	}
	else if (flag == 3)//功能四
	{
		T->SearchAndPrintTxt(T);
	}
	return 0;
}