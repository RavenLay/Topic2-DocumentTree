#include "数据结构.h"

int main()
{
	//创建对象，调用构造函数实现功能一
	Tree T;

	//功能选择界面(待美化)
	int flag = 0;
	cout << "Please input your choice" << endl;
	cin >> flag;

	//功能执行
	if(flag == 1)//功能二
	{
		T.Insert();
	}
	else if (flag == 2)//功能三
	{
		T.SearchAndPrintLable();
	}
	else if (flag == 3)//功能四
	{
		T.SearchAndPrintTxt();
	}
	return 0;
}