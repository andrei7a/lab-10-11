#include <iostream>
#include "Set.h"
#include <vector>
#include <stack>
#include <string>
#include <windows.h>
using namespace std;

void main()
{
	vector<Set> my_vector;//создаем контейнер типа vector для элементов пользовательского класса Set
	vector<Set> for_sort;
	Set a1, a2, a3, a4;//создаем объекты типа Set
	cin >> a1;//инициализмруем объекты (ТРИ ЧИСЛА ЧЕРЕЗ ПРОБЕЛ, В КОНЦЕ ENTER!!!!!!!!!!!!!!!)
	cin >> a2;
	cin >> a3;
	cin >> a4;
	my_vector.push_back(a1);//вставляем элементы в конец контейнера
	my_vector.push_back(a2);
	my_vector.push_back(a3);
	my_vector.push_back(a4);
	cout << "----------------------- Vektor ----------------------" << endl;
	for (int i = 0; i < my_vector.size(); i++)//выводим на экран элементы вектора, получая элемент через индекс i
	{
		cout << my_vector[i] << endl;
	}

	
	cout << "----------- Sort Vektor by the sum numbers of the set -------------" << endl;
	int k = 0;
	for_sort.push_back(my_vector[0]);//сортируем контейнер по сумме элементов множества

	for (int i = 1; i < my_vector.size(); i++)
	{
		for (int j = 0; j < for_sort.size(); j++)
		{
			if (for_sort[j].sum() < my_vector[i].sum()) { k++; }
		}
		if (k == 0)
		{
			for_sort.push_back(my_vector[i]);
		}
		else
		{
			vector<Set>::iterator it = for_sort.begin();
			it += k;
			for_sort.insert(it, my_vector[i]);
			k = 0;
			it = for_sort.begin();
		}
	}

	my_vector = for_sort;

	for (int i = 0; i < my_vector.size(); i++)//выводим на экран элементы вектора, получая элемент через индекс i
	{
		cout << my_vector[i] << endl;
	}

	cout << "-------------- Move on the stack elements sum numbers of the set < 12  -------------" << endl;
	stack<Set> my_stack;
	for (int i = 0; i < my_vector.size(); i++)//заносим в стек элементы, сумма множества уоторого <4
	{
		if (my_vector[i].sum() < 12)
			my_stack.push(my_vector[i]);
	}
	stack<Set> my_stack2 = my_stack;//делаем копию стека, т.к. при просмотре стека он очищается
	for (int i = 0; i < my_stack2.size(); i++)//выводим стек на экран
	{
		cout << my_stack2.top() << endl;
		my_stack2.pop();
	}

	cout << "---- Create a third container and insert into it elements of the previous two ----"<<endl;
	vector<Set> my_vector2;
	for (int i = 0; i < my_vector.size(); i++)//вставляем в новый контейнер элементы первого 
	{	
		my_vector2.push_back(my_vector[i]);
	}
	for (int i = 0; i < my_stack.size(); i++)//вставляем в новый контейнер элементы стека
	{
		my_vector2.push_back(my_stack.top());
		my_stack.pop();
	}
	for (int i = 0; i < my_vector2.size(); i++)//выводим на экран элементы вектора, получая элемент через индекс i
	{
		cout << my_vector2[i] << endl;
	}

	cout << "----------------------- amount of elements sum >10  ----------------------" << endl;
	int num = 0;

	for (int i = 0; i < my_vector2.size(); i++)//считаем кол-во элементов в контейнере > 10
	{
		if (my_vector2[i].sum()>10)num++;
		
	}
	cout << num<< endl;
}
