#include <iostream>

using namespace std;


template <typename T>
int split(T* a, int left, int right)
{
	while (left < right)
	{
		while (a[left] <= a[right] && left < right)
		{
			left++;
		}
		swap(a[left], a[right]);
		while (a[left] <= a[right] && left < right)
		{
			right--;
		}
		swap(a[left], a[right]);
	}
	return left;
}
template <typename T>
void quicksort(T*a,int left,int right)
{
	if (left < right)
	{
		int key = split(a, left, right);
		cout << "key:" << key << endl;
		quicksort(a, left, key - 1);
		quicksort(a, key + 1, right);
	}
}


int main()
{
	int a[10] = {10,9,8,7,6,5,4,3,2,1};
	quicksort(a, 0, 9);
	for (auto c : a)
	{
		cout << c << endl;
	}
	return 0;
}


