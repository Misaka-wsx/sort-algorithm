/*************************************************************************
    > File Name: select_sort.h
    > Author: icesummer
    > Mail: wangsixiamksh@163.com 
    > Created Time: 2019-07-15
 ************************************************************************/

#include<iostream>
using namespace std;
#ifndef _SELECT_SORT_
template<typename T> 
void select_sort(T* val,size_t len)
{
    for(int i=0;i<len-1;i++)
    {
        int min=i;
        for(int j=i+1;j<len;j++)
        {
            if(val[j]<val[min])
            {
                min=j;
            }
        }
        std::swap(val[min],val[i]);
    }
} 
#endif