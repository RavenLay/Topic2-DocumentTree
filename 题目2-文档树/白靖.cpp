#include "数据结构.h"

//建树并输出结构
//构造函数 功能一
Tree::Tree(string str, int pos)
{
	if (pos==0)
	{
		//输入文件路径
		cout << "请输入文件路径\n";
		cin >> str;
	}
	fstream File(str, ios::in);//打开文件

	if (!File)//文件打开失败
	{
		File.close();//文件关闭
		cout << "Error" << endl;
		exit(1);//退出整个程序
	}

	//设置文件读指针 从开头向后pos个位置
	File.seekg(pos, ios::beg);

	//读取文件
	string stri;
	while (getline(File,stri))
	{
		int flag = stri.find("<");
		if(stri != "<!DOCTYPE html>"&&flag>=0)//从<html>标签开始
		{
			//两个问题：一个是什么时候判断</，一个是什么时候判断标签和文本
			data = stri.substr(1, stri.length() - 2);//去掉标签两头的<>
			int position=File.tellg();//获取当前的文件读指针的位置

			Tree T(str,position);
			TreeNode.push_back(T);
		}
	}
	//建树
	//图形化输出
}

//功能四
void Tree::SearchAndPrintTxt()
{
	//选择全部输出还是输出含关键字的文本
	//功能选择界面(待美化)
	int flag = 0;
	cout << "Please input your choice";
	cin >> flag;

	if (flag == 1)//全部
	{
		//遍历输出各叶子结点是文本的文本内容
	}
	else if (flag == 2)//含关键字的
	{
		//遍历匹配输出各叶子结点是含关键字的文本内容
	}
}