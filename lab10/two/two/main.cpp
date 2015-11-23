#include<iostream> 
#include "Set.h"
#include<vector>
using namespace std;

void main() {

	Set a;
	cout << "Enter A (a b c <Enter>): ";	cin >> a;
	cout << endl;
	Set b;
	cout << "Enter B (a b c <Enter>): "; cin >> b;
	cout << endl;
	cout << "A: " << a << endl;
	cout << "B: " << b << endl;
	Set c = (a + b);
	cout << "A+B: " << c << endl;
	cout << "A<=B: ";
	if (a <= b)
	{
		cout <<"True" << endl;
	}
	else
	{
		cout <<"False" << endl;
	}
	cout << "A[3]: " << a[2] << endl;
	cout<<"Int(A): "<< int(a)<<endl;


	cout << "---------------------------- Vektor -----------------------------";
	vector<Set> container;
	container.push_back(a);
	container.push_back(b);
	container.push_back(c);
	cout << endl;
	for (int i = 0; i < container.size(); i++)
	{
		cout << "----- Element " << i +1<< " -----"<<endl;
		cout << container[i];
		cout << endl;
	}
}