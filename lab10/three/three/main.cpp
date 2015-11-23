#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

void main()
{
	vector<string> my_vector;
	vector<string> my_vector_temp;
	my_vector.push_back("A string vector");
	my_vector.push_back("D string vector");
	my_vector.push_back("B string vector");
	my_vector.push_back("C string vector");
	cout << "---------------------------- Vektor ----------------------------" << endl;
	for (int i = 0; i < my_vector.size(); i++)
	{
		cout << my_vector[i] << endl;
	}
	cout << "---------------------------- Vektor after sort ----------------------------" << endl;
	vector<string> temp_for_sort;
	
	int k = 0;
	bool flag = 0;

	temp_for_sort.push_back(my_vector[0]);

	for (int i = 1; i < my_vector.size(); i++)
	{
		for (int j = 0; j < temp_for_sort.size(); j++)
		{
			if (temp_for_sort[j] < my_vector[i]) { k++;}
		}
		if (k == 0)
		{
			temp_for_sort.push_back(my_vector[i]);
		}
		else
		{
			vector<string>::iterator it = temp_for_sort.begin();
			it += k;
			temp_for_sort.insert(it, my_vector[i]);
			k = 0;
			it = temp_for_sort.begin();
		}
	}

	for (int i = 0; i < temp_for_sort.size(); i++)
	{
		cout << temp_for_sort[i] << endl;
	}

	cout << "----------------------- Add in stack elements more B -----------------" << endl;
	stack<string> my_stack;

	for (int i = 0; i < my_vector.size(); i++)
	{
		if (my_vector[i] >= "C")
		{
			my_stack.push(my_vector[i]);
		}
	}
	
	while(!my_stack.empty())
	{
		cout << my_stack.top() << endl;
		 my_vector_temp.push_back(my_stack.top());
		my_stack.pop();
	}

	for (int i = 0; i < temp_for_sort.size(); i++)
	{
		my_vector_temp.push_back(temp_for_sort[i]);
	}


	cout << "----------------------- Third container -----------------" << endl;
	for (int i = 0; i < my_vector_temp.size(); i++)
	{
		cout << my_vector_temp[i] << endl;
	}
	



}