#include <iostream>
#include "quick_sort.h"
#include "bubble_sort.h"
#include "insert_sort.h"
#include "select_sort.h"
int main()
{
	int a[10] = {10,7,9,6,8,3,4,1,24,43};
//quicksort(a, 0, 9);
	int len = sizeof(a)/sizeof(a[0]);
//bubble_sort(a,len);
	//insert_sort(a,len);
	select_sort(a,len);
	for (auto c : a)
	{
		std::cout << c << std::endl;
	}
	return 0;
}

