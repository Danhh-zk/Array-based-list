#pragma once

template<class T>
class arrayListType
{
	private:
		T* list;
		T length; 
		T maxSize;
	public:
		arrayListType(int size = 100);
		int most_repeated();
		bool isEmpty();
		bool isFull(); 
		int listSize(); 
		int maxlistSize(); 
		void print(); 
		void second_max();
		bool isItemAtEqual(T location, T item); 
		void insertAt(T location, T insertItem);
		void insertEnd(T insertItem);
		void removeAt(T location);
		void retrieveAt(T location, T& retItem); 
		void replaceAt(T location, T repItem);
		void clearList();
		int seqSearch(T item);
		void insert(T insertItem);
		void remove(T removeItem);
		arrayListType(const arrayListType<T>& otherList);
		~arrayListType(); 
		bool swap(T , T);
};

