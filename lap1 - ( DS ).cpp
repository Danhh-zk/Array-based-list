// lap1 - ( DS ).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

template<class T>
#include<iostream>
#include"arrayListType.h"
#include <string>

using namespace std;
	int main()
	{
		arrayListType<int>list;
		arrayListType<string> stringList;
		int num;
		int item1,item2;
		cout << " Enter listes' number :- To end Enter -999" << endl;
		cin >> num;
		while (num != -999)
		{
			list.insert(num);
			cin >> num;
		}
		
		
		cout << "The list you entered is : " << endl;
		list.print();

		cout << "\nThe list size is : " << list.listSize() << endl;
		cout << "\nThe list Max size : " << list.maxlistSize() << endl;
		cout << "\nenter the numbers you want to swap : ";
		cin >> item1 >> item2;
		list.swap(item1,item2);
		cout << "\nThe list after swap : "<<endl;
		list.print();
		cout << "\nthe repeated :";
		cout << list.most_repeated() << endl;
		list.second_max();
		cout << "\nThe list isEmpty function return : " << list.isEmpty() << endl;
		cout << "The list isFull function return : " << list.isFull() << endl;
		cin >> num;
		
		return 0;
	}

