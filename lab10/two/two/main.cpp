#include <iostream>
#include "Set.h"
#include <vector>
#include <string>
#include <windows.h>
using namespace std;

void main()
{
	vector<Set> my_vektor;//������� ��������� ���� vector ��� ��������� ����������������� ������ Set
	Set a1,a2,a3,a4;//������� ������� ���� Set
	cin >> a1;//�������������� ������� (��� ����� ����� ������, � ����� ENTER!!!!!!!!!!!!!!!)
	cin >> a2;
	cin >> a3;
	cin >> a4;
	my_vektor.push_back(a1);//��������� �������� � ����� ����������
	my_vektor.push_back(a2);
	my_vektor.push_back(a3);
	my_vektor.push_back(a4);
	cout << "----------------------- Vektor ----------------------" << endl;
	for (int i = 0; i < my_vektor.size(); i++)//������� �� ����� �������� �������, ������� ������� ����� ������ i
	{
		cout << my_vektor[i] << endl;
	}

	vector<Set>::iterator p = my_vektor.begin();//������� �������� � �������� � ���� ������ �������
	p += 2;//������������ �� 2 �������� ������(� ��������)
	cout << "----------------------- Delete  ----------------------" << endl;

	my_vektor.erase(p); //�������� ��������, ����������� � ���������

	p = my_vektor.begin(); //������� � �������� ������ �������
	while (p != my_vektor.end()) //������� �� ����� �������� ���������� � ������� ���������
	{
		cout << *p << endl;
		p++;
	}
	cout << "----------------------- Insert  ----------------------" << endl;
	p = my_vektor.begin() + 2;//�������� � �������� 3 �������
	Set a5;
	cin >> a5;
	my_vektor.insert(p, a5);//��������� ������� ����� ��������� � ����������
	for (int i = 0; i < my_vektor.size(); i++)//������� �� ����� �������� �������, ������� ������� ����� ������ i
	{
		cout << my_vektor[i] << endl;
	}


	vector<Set> my_vektor2;//������� ��������� ���� vector ��� ��������� ����������������� ������ Set
	Set b1, b2, b3, b4;//������� ������� ���� Set
	cin >> b1;//�������������� ������� (��� ����� ����� ������, � ����� ENTER!!!!!!!!!!!!!!!)
	cin >> b2;
	cin >> b3;
	cin >> b4;
	my_vektor.push_back(b1);//��������� �������� � ����� ����������
	my_vektor.push_back(b2);
	my_vektor.push_back(b3);
	my_vektor.push_back(b4);
	cout << "----------------------- Delete and insert of first  ----------------------" << endl;
	p = my_vektor.begin();//�������� � �������� ������ �������
	my_vektor.erase(p, p + 2);//������� �������� � ������� �� ������
	for (int i = 0; i < my_vektor2.size(); i++)//��������� � ������ ������ �������� �������
	{
		my_vektor.push_back(my_vektor2[i]);
	}
	for (int i = 0; i < my_vektor.size(); i++)//������� �� ����� �������� �������, ������� ������� ����� ������ i
	{
		cout << my_vektor[i] << endl;
	}



}
