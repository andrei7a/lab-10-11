#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
using namespace std;

void main()
{
	vector<string> my_vektor;
	my_vektor.push_back("one string");
	my_vektor.push_back("two string");
	my_vektor.push_back("three string");
	my_vektor.push_back("four string");
	cout << "----------------------- Vektor ----------------------"<<endl;
	for (int i = 0; i < my_vektor.size(); i++)
	{
		cout << my_vektor[i] << endl;
	}

	vector<string>::iterator p = my_vektor.begin();
	p += 2;

	my_vektor.erase(p);
	cout << "----------------------- Delete  ----------------------" << endl;
	p= my_vektor.begin();
	while (p != my_vektor.end())
	{
		cout << *p << endl;
		p++;
	}
	cout << "----------------------- Insert  ----------------------" << endl;
	p = my_vektor.begin() + 2;
	my_vektor.insert(p, "insert string");
	for (int i = 0; i < my_vektor.size(); i++)
	{
		cout << my_vektor[i] << endl;
	}


	vector<string> my_vektor2;
	my_vektor2.push_back("one string copy");
	my_vektor2.push_back("two string copy");
	my_vektor2.push_back("three string copy");
	my_vektor2.push_back("four string copy");
	cout << "----------------------- Delete and insert of first  ----------------------" << endl;
	p = my_vektor.begin();
	my_vektor.erase(p, p+2);
	for (int i = 0; i < my_vektor2.size(); i++)
	{
		my_vektor.push_back(my_vektor2[i]);
	}
	for (int i = 0; i < my_vektor.size(); i++)
	{
		cout << my_vektor[i] << endl;
	}



}
