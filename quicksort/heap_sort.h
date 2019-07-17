/*************************************************************************
    > File Name: heap_sort.h
    > Author: icesummer
    > Mail: wangsixiamksh@163.com 
    > Created Time: 2019-07-15
 ************************************************************************/
#ifndef HEAP_SORT_H_
#define HEAP_SORT_H_
template<typename T>
    void Max_Heapify(T*arr, int i,size_t heapSize)
    {
    //  size_t heapSize = sizeof(arr) / sizeof(*(arr));
        int l = LEFT(i);
        int r = RIGHT(i);
        int largest;
        if (l<heapSize && *(arr + l)>*(arr + i))
            largest = l;
        else
            largest = i;
        if (r<heapSize && *(arr + r)>*(arr + largest))
            largest = r;
        if (largest != i)
        {
            swap(*(arr + i), *(arr + largest));
            Max_Heapify(arr, largest,heapSize);
        }
    }
template<typename T>
    void Build_Max_Heap(T*arr,size_t heapSize)
    {
        for (int i = heapSize / 2 - 1; i >= 0; i--)
            Max_Heapify(arr, i,heapSize);
    }
    template <typename T>
    void HeapSort(T *arr,size_t heapSize)
    {
        Build_Max_Heap(arr,heapSize);
        for (int i = heapSize - 1; i > 0; i--)
        {
            swap(*arr, *(arr + i));
            Max_Heapify(arr, 0,i);
        }
    } 
#endif
