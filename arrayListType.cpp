#include "arrayListType.h"
#include<iostream>
using namespace std;

template<class T>
arrayListType<T>::arrayListType(int size)
{
	if (size < 0)
	{
		cout << "The array size must be positive.Creaing an array of size 100 ." << endl;
		maxSize = 100;
	}
	else
		maxSize = size;
	length = 0;
	list = new int[maxSize];

}

template<class T>
bool arrayListType<T>::isEmpty()
{
	return(length == 0);
}

template<class T>
bool arrayListType<T>::isFull()
{
	return(length == maxSize);
}

template<class T>
int arrayListType<T>::listSize()
{
	return length;
}
template<class T>
int arrayListType<T>::maxlistSize()
{
	return maxSize;
}
template<class T>
void arrayListType<T>::print()
{
	int i;
	for (i = 0; i < length; i++)
		cout << list[i] << " ";
}
template<class T>
bool arrayListType<T>::isItemAtEqual(T location, T item)
{
	return(list[location] == item);
}
template<class T>
void arrayListType<T>::insertAt(int location, int insertItem)
{
	int i;
	if (location < 0 || location >= maxSize)
		cout << "The position (location) of the item to be inserted is out of range " << endl;
	else
		if (length >= maxSize)
			cout << "Cannot insert in a full list " << endl;
		else
		{
			i = length;
			while (i > location)
			{
				list[i] = list[i - 1];
				i--;
			}
				
			list[location] = insertItem;
			length++;
		}
}

template<class T>
bool arrayListType<T>::swap(T a ,T b) {;

	cout << " Before swap is : " << " a = " << list[a] << " and b = " << list[b];

	if (a >= 0 && b >= 0 && a < length && b < length) {
		int temp;
		temp = list[a];
		list[a] = list[b];
		list[b] = temp;

		cout << " After swap is : " << " a = " << list[a] << " and b = " << list[b];

		return true;
	}
	else
		cout << " The swap is Worng . "; 
		return false;
}

template<class T>
int arrayListType<T>::most_repeated()
{
	int item = 0;
	int most_repet = 0 ;
	int x = 0;
	while(x < length-1)
	{
		int number=0;
		int y = x + 1;
		while( y < length)
		{
			if (list[x] == list[y])
			{
				number++;
			}
			y++;
		}

		if (number > most_repet)
		{
			most_repet = number;
			item = list[x];
		}
		x++;
	}
	return item;

}
	

template<class T>
void arrayListType<T>::second_max()
{
	int second;

		if (list[0] < list[1])
		{
			maxSize =list[1];
			second = list[0];
		}

		else
		{
			maxSize = list[0];
			second = list[1];
		}
		
		int i = 2;
		while( i < length)
		{
			if (list[i] > maxSize)
			{
				second = maxSize;
				maxSize = list[i];
			}
			else if (list[i] > second && list[i] != maxSize)
				second = list[i];
			i++;
		}
		cout << "The second max is :" << second;

}


template<class T>
void arrayListType<T>::insertEnd(T insertItem)
{
	if (length >= maxSize)
		cout << "Cannot insert in a full list " << endl;
	else
	{
		list[length] = insertItem;
		length++;
	}
}

template<class T>
void arrayListType<T>::removeAt(T location)
{
	int i;
	if (location < 0 || location >= length)
		cout << "The location of the item to be removed is out of range " << endl;
	else
	{
		for (i = location; i < length - 1; i++)
			list[i] = list[i + 1];
		length--;
	}
}
template<class T>
void arrayListType<T>::retrieveAt(T location, T& retItem)
{
	if (location < 0 || location >= length)
		cout << "The location of the item to be retrieved is out of range " << endl;
	else
		retItem = list[location];
}

template<class T>
void arrayListType<T>::replaceAt(int location, int repItem)
{
	if (location < 0 || location >= length)
		cout << "The location of the item to be replacet is range " << endl;
	else
		list[location] = repItem;
}

template<class T>
void arrayListType<T>::clearList()
{
	length=0 ;
}

template<class T>
arrayListType<T>::~arrayListType()
{
	delete[]list;
}

template<class T>
arrayListType<T>::arrayListType(const arrayListType<T>& otherList)
{
	int j;
	maxSize = otherList.maxSize;
	length = otherList.length;
	list = new int[maxSize];
	if (length != 0)
		for (j = 0; j < length; j++)
			list[j] = otherList.list[j];
}

template<class T>
int arrayListType<T>::seqSearch(T item)
{
	int loc;
	bool found = false;
	for (loc = 0; loc < length; loc++)
		if (list[loc] == item)
		{
			found = true;
			break;
		}
	if (found)
		return loc;
	else
		return -1;
}
template<class T>
void arrayListType<T>::insert(T insertItem)
{
	int loc;
	if (length == 0)
		list[length++] = insertItem;
	else
		if (length == maxSize)
			cout << "Cannot insert in a full list" << endl;
		else
		{
				list[length++] = insertItem;
			
		}
}
template<class T>
void arrayListType<T>::remove(T removeItem)
{
	int loc;
	if (length == 0)
		cout << "Cannot delet from an empty list ." << endl;
	else
	{
		loc = seqSearch(removeItem);
		if (loc != -1)
			removeAt(loc);
		else
			cout << "The tem to be deleted is not in the list . " << endl;
	}
}

