#include <iostream>
#include "quick_sort.h"
#include "bubble_sort.h"


int main()
{
	int a[10] = {10,9,8,7,6,5,4,3,2,1};
	quicksort(a, 0, 9);
	int len = sizeof(a)/sizeof(a[0]);
	bubble_sort(a,len);
	for (auto c : a)
	{
		std::cout << c << std::endl;
	}
	return 0;
}


