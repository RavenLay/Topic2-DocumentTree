#include <iostream>
using namespace std;

#include "雷雯雯.h"

int main()
{
	//功能选择界面(待美化)
	int flag = 0;
	cout << "Please input your choice";
	cin >> flag;
	Tree T;
	if (flag==1)//功能一
	{
		T.CreateTreeAndPrint(T);
	}
	else if(flag == 2)//功能二
	{
		T.Insert(T);
	}
	else if (flag == 3)//功能三
	{
		T.SearchAndPrintLable(T);
	}
	else if (flag == 4)//功能四
	{
		T.SearchAndPrintTxt(T);
	}
	return 0;
}