#include "���ݽṹ.h"

//�������� �ͷ�vector�����ڴ�
Tree::~Tree()
{
	for (vector<Tree*>::iterator it = TreeNode.begin(); it != TreeNode.end(); it++)
	{
		delete *it;
	}
	TreeNode.clear();//���vector����
}

//����һ����������ṹ�����ݻ���
void Tree::CreateTreeAndPrint(Tree* &T)
{
	//�����ļ�·��
	//��ȡ�ļ�
	//����
	//ͼ�λ����
}

//������
void Tree::SearchAndPrintTxt(Tree* &T)
{
	//ѡ��ȫ���������������ؼ��ֵ��ı�
	//����ѡ�����(������)
	int flag = 0;
	cout << "Please input your choice";
	cin >> flag;

	if (flag == 1)//ȫ��
	{
		//���������Ҷ�ӽ�����ı����ı�����
	}
	else if (flag == 2)//���ؼ��ֵ�
	{
		//����ƥ�������Ҷ�ӽ���Ǻ��ؼ��ֵ��ı�����
	}
}