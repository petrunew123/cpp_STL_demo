/*****************************************************************************
* @author      : hunter                                                      *
* @date        :                                                             *
* @file        :                                                             *
* @brief       :                                                             *
* @description :                                                             *
*****************************************************************************/

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//vector���췽��
	vector<int> iv;

	vector<int> iv1(10, 5);
	for (const auto& e : iv1)
		cout << e << " ";
	cout << endl;

	vector<int> iv2 = iv1;
	for (const auto& e : iv2)
		cout << e << " ";
	cout << endl;

	//vector������
	int ar[] = { 1,2,3,4,5,6,7,8,9,0 };
	vector<int> iv3(ar, ar + 10);
	for (const auto& e : iv3)
		cout << e << " ";
	cout << endl;

	vector<int>::iterator it = iv3.begin();
	while (it != iv3.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	auto it1 = iv3.begin();
	while (it1 != iv3.end())
	{
		cout << *it1 << " ";
		++it1;
	}
	cout << endl;
	//���������
	auto it2 = iv3.rbegin();
	while (it2 != iv3.rend())
	{
		cout << *it2 << " ";
		++it2;
	}
	cout << endl;

	//vectorԪ�ر��
	vector<int> iv4;
	cout << "size = " << iv4.size() << endl;
	cout << "capacity = " << iv4.capacity() << endl;
	iv4.push_back(1);
	iv4.push_back(2);
	iv4.push_back(3);
	iv4.push_back(4);
	iv4.push_back(5);
	cout << "size = " << iv4.size() << endl;
	cout << "capacity = " << iv4.capacity() << endl;

	iv4.resize(15);
	cout << "size = " << iv4.size() << endl;
	cout << "capacity = " << iv4.capacity() << endl;
	iv4.resize(10);//��С���Լ�С
	cout << "size = " << iv4.size() << endl;
	cout << "capacity = " << iv4.capacity() << endl;

	iv4.reserve(100);
	cout << "size = " << iv4.size() << endl;
	cout << "capacity = " << iv4.capacity() << endl;
	iv4.reserve(50);//���ݲ��ܼ���
	cout << "size = " << iv4.size() << endl;
	cout << "capacity = " << iv4.capacity() << endl;

	//��ɾ�Ĳ�
	for (const auto& e : iv4)
		cout << e << " ";
	cout << endl;
	iv4.pop_back();
	iv4.insert(iv4.begin(), 10);
	for (const auto& e : iv4)
		cout << e << " ";
	cout << endl;
	iv4.erase(iv4.begin());
	for (const auto& e : iv4)
		cout << e << " ";
	cout << endl;

	auto pos = find(iv4.begin(), iv4.end(), 5);
	if (pos != iv4.end())
	{
		iv4.erase(pos);
	}
	else
		cout << "Ҫɾ����ֵ������" << endl;
	for (const auto& e : iv4)
		cout << e << " ";
	cout << endl;

	iv3.swap(iv4);//����
	cout << "iv3 = ";
	for (const auto& e : iv3)
		cout << e << " ";
	cout << endl;
	cout << "iv4 = ";
	for (const auto& e : iv4)
		cout << e << " ";
	cout << endl;

	for (size_t i = 0; i < iv4.size(); ++i)
		cout << iv4[i] << " ";//[]������Խ����
	cout << endl;
	for (size_t i = 0; i < iv4.size(); ++i)
		cout << iv4.at(i) << " ";//��Ա߽���з���Խ��������м��
	cout << endl;
	system("pause");
	return 0;
}