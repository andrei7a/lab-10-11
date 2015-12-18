#include <iostream>
#include "Set.h"
#include <vector>
#include <string>
#include <windows.h>
using namespace std;

void main()
{
	vector<Set> my_vektor;//создаем контейнер типа vector для элементов пользовательского класса Set
	Set a1,a2,a3,a4;//создаем объекты типа Set
	cin >> a1;//инициализмруем объекты (ТРИ ЧИСЛА ЧЕРЕЗ ПРОБЕЛ, В КОНЦЕ ENTER!!!!!!!!!!!!!!!)
	cin >> a2;
	cin >> a3;
	cin >> a4;
	my_vektor.push_back(a1);//вставляем элементы в конец контейнера
	my_vektor.push_back(a2);
	my_vektor.push_back(a3);
	my_vektor.push_back(a4);
	cout << "----------------------- Vektor ----------------------" << endl;
	for (int i = 0; i < my_vektor.size(); i++)//выводим на экран элементы вектора, получая элемент через индекс i
	{
		cout << my_vektor[i] << endl;
	}

	vector<Set>::iterator p = my_vektor.begin();//создаем итератор и помещаем в него первый элемент
	p += 2;//перемещаемся на 2 элемента вперед(к третьему)
	cout << "----------------------- Delete  ----------------------" << endl;

	my_vektor.erase(p); //удаление элемента, помещенного в иттератор

	p = my_vektor.begin(); //помещам в итератор первый элемент
	while (p != my_vektor.end()) //выводим на экран элементы контейнера с помощью итератора
	{
		cout << *p << endl;
		p++;
	}
	cout << "----------------------- Insert  ----------------------" << endl;
	p = my_vektor.begin() + 2;//помещаем в итератор 3 элемент
	Set a5;
	cin >> a5;
	my_vektor.insert(p, a5);//вставляем элемент перед элементом в иттераторе
	for (int i = 0; i < my_vektor.size(); i++)//выводим на экран элементы вектора, получая элемент через индекс i
	{
		cout << my_vektor[i] << endl;
	}


	vector<Set> my_vektor2;//создаем контейнер типа vector для элементов пользовательского класса Set
	Set b1, b2, b3, b4;//создаем объекты типа Set
	cin >> b1;//инициализмруем объекты (ТРИ ЧИСЛА ЧЕРЕЗ ПРОБЕЛ, В КОНЦЕ ENTER!!!!!!!!!!!!!!!)
	cin >> b2;
	cin >> b3;
	cin >> b4;
	my_vektor.push_back(b1);//вставляем элементы в конец контейнера
	my_vektor.push_back(b2);
	my_vektor.push_back(b3);
	my_vektor.push_back(b4);
	cout << "----------------------- Delete and insert of first  ----------------------" << endl;
	p = my_vektor.begin();//помещаем в итератор первый элемент
	my_vektor.erase(p, p + 2);//удаляем элементы с первого по третий
	for (int i = 0; i < my_vektor2.size(); i++)//вставляем в первый вектор элементы второго
	{
		my_vektor.push_back(my_vektor2[i]);
	}
	for (int i = 0; i < my_vektor.size(); i++)//выводим на экран элементы вектора, получая элемент через индекс i
	{
		cout << my_vektor[i] << endl;
	}



}
