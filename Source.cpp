#include<iostream>

using namespace std;

template <class T> // generic template 
T getMinArray(T arr[], int size) 
{
	int i;
	T min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (min > arr[i])
			min = arr[i];
		else
			min = min;
	}
	return min;
}

int main()
{

	int myArray[] = { 1, 2, 3, 4, 5, 6 };
	cout << "Min integer valuse in this array {1, 2, 3, 4, 5, 6}" << endl;
	cout << getMinArray<int>(myArray, 5) << endl;

	return 0; 
}