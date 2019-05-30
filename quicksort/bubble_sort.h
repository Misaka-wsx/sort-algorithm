#pragma once
#ifndef _BUBBLE_SORT_

template<typename T> void bubble_sort(T* a, size_t n)
{
	for (size_t i = 0; i < n-1; i++)
	{
		for (size_t j = 0; j <n-i-1; j++)
		{
			if (a[j] > a[j + 1])
			{
				auto tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
}







#endif // !_BUBBLE_SORT_
