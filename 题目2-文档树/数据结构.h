#pragma once

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Tree
{
private:
	//�ĵ��������ݽṹ(������ָ���)
	string data;//����
	vector<Tree*>TreeNode;//���ȿɱ�ָ������

	//��������������Ǵ�

public:
	~Tree();
	//�ĵ�������
	void CreateTreeAndPrint(Tree* &T);//����һ
	void Insert(Tree* &T);//���ܶ�
	void SearchAndPrintLable(Tree* &T);//������
	void SearchAndPrintTxt(Tree* &T);//������
};