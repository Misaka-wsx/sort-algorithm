/*************************************************************************
    > File Name: insert_sort.h
    > Author: icesummer
    > Mail: wangsixiamksh@163.com
    > Created Time: 2019-07-15
 ************************************************************************/

#ifndef _INSERT_SORT_

template<typename T> void insert_sort(T*val,size_t len)
{
    for(int i=1;i<len;i++)
    {
        for(int j=i;j>=1&&val[j]<val[j-1];j--)
        {
            std::swap(val[j],val[j-1]);
        }
    }
}
#endif

