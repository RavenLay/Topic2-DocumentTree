#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <stack>
using namespace std;

class Tree
{
private:
	//�ĵ��������ݽṹ(������ָ���)
	string data;//����
	vector<Tree>TreeNode;//���ȿɱ�ָ������

	//��������������Ǵ�

public:
	//�ĵ�������
	Tree(string str="", int pos = 0);//���캯��������һ��
	void Insert();//���ܶ�
	void SearchAndPrintLable();//������
	void SearchAndPrintTxt();//������
};