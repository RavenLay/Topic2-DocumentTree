#include "���ݽṹ.h"

//����������ṹ
//���캯�� ����һ
Tree::Tree(string str, int pos)
{
	if (pos==0)
	{
		//�����ļ�·��
		cout << "�������ļ�·��\n";
		cin >> str;
	}
	fstream File(str, ios::in);//���ļ�

	if (!File)//�ļ���ʧ��
	{
		File.close();//�ļ��ر�
		cout << "Error" << endl;
		exit(1);//�˳���������
	}

	//�����ļ���ָ�� �ӿ�ͷ���pos��λ��
	File.seekg(pos, ios::beg);

	//��ȡ�ļ�
	string stri;
	while (getline(File,stri))
	{
		int flag = stri.find("<");
		if(stri != "<!DOCTYPE html>"&&flag>=0)//��<html>��ǩ��ʼ
		{
			//�������⣺һ����ʲôʱ���ж�</��һ����ʲôʱ���жϱ�ǩ���ı�
			data = stri.substr(1, stri.length() - 2);//ȥ����ǩ��ͷ��<>
			int position=File.tellg();//��ȡ��ǰ���ļ���ָ���λ��

			Tree T(str,position);
			TreeNode.push_back(T);
		}
	}
	//����
	//ͼ�λ����
}

//������
void Tree::SearchAndPrintTxt()
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