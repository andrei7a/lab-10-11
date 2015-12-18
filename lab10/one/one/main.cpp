#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
using namespace std;

void main()
{
	vector<string> my_vektor;//создаем контейнер типа vector
	my_vektor.push_back("one string");//вставляем строку в конец контейнера
	my_vektor.push_back("two string");
	my_vektor.push_back("three string");
	my_vektor.push_back("four string");
	cout << "----------------------- Vektor ----------------------"<<endl;
	for (int i = 0; i < my_vektor.size(); i++)//выводим на экран элементы вектора, получая элемент через индекс i
	{
		cout << my_vektor[i] << endl;
	}

	vector<string>::iterator p = my_vektor.begin();//создаем итератор и помещаем в него первый элемент
	p += 2;//перемещаемся на 2 элемента вперед(к третьему)
	cout << "----------------------- Delete  ----------------------" << endl;
	
	my_vektor.erase(p); //удаление элемента, помещенного в иттератор
	
	p= my_vektor.begin(); //помещам в итератор первый элемент
	while (p != my_vektor.end()) //выводим на экран элементы контейнера с помощью итератора
	{
		cout << *p << endl;
		p++;
	}
	cout << "----------------------- Insert  ----------------------" << endl;
	p = my_vektor.begin() + 2;//помещаем в итератор 3 элемент
	my_vektor.insert(p, "insert string");//вставляем строку перед элементом в иттераторе
	for (int i = 0; i < my_vektor.size(); i++)//выводим на экран элементы вектора, получая элемент через индекс i
	{
		cout << my_vektor[i] << endl;
	}


	vector<string> my_vektor2;//создаем контейнер типа vector
	my_vektor2.push_back("one string copy");//вставляем строки в контейнер
	my_vektor2.push_back("two string copy");
	my_vektor2.push_back("three string copy");
	my_vektor2.push_back("four string copy");
	cout << "----------------------- Delete and insert of first  ----------------------" << endl;
	p = my_vektor.begin();//помещаем в итератор первый элемент
	my_vektor.erase(p, p+2);//удаляем элементы с первого по третий
	for (int i = 0; i < my_vektor2.size(); i++)//вставляем в первый вектор элементы второго
	{
		my_vektor.push_back(my_vektor2[i]);
	}
	for (int i = 0; i < my_vektor.size(); i++)//выводим на экран элементы вектора, получая элемент через индекс i
	{
		cout << my_vektor[i] << endl;
	}



}
