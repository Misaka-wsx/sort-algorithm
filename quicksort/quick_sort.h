#pragma once
#ifndef _QUICK_SORT_

template <typename T>
int split(T* a, int left, int right)
{
	while (left < right)
	{
		while (a[left] <= a[right] && left < right)
		{
			left++;
		}
		std::swap(a[left], a[right]);
		while (a[left] <= a[right] && left < right)
		{
			right--;
		}
		std::swap(a[left], a[right]);
	}
	return left;
}
template <typename T>
void quicksort(T* a, int left, int right)
{
	if (left < right)
	{
		int key = split(a, left, right);
		std::cout << "key:" << key << std::endl;
		quicksort(a, left, key - 1);
		quicksort(a, key + 1, right);
	}
}

#endif // !_QUICK_SORT_

