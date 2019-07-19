/*************************************************************************
    > File Name: merge_sort.h
    > Author: icesummer
    > Mail: wangsixiamksh@163.com 
    > Created Time: 2019-07-15
 ************************************************************************/

template <typename T>
void Merge(T *sourceArray, T *temp, int Start_Index, int Mid_Index, int End_Index) {
    int i = Start_Index, j = Mid_Index + 1, k = Start_Index;
    while (i != Mid_Index + 1 && j != End_Index + 1) {
        if (sourceArray[i] > sourceArray[j]) {
            temp[k++] = sourceArray[j++];
        } else {
            temp[k++] = sourceArray[i++];
        }
    }
    while (i != Mid_Index + 1) {
        temp[k++] = sourceArray[i++];
    }
    while (j != End_Index + 1) {
        temp[k++] = sourceArray[j++];
    }
    for (int i = Start_Index; i != End_Index + 1; i++) {
        sourceArray[i] = temp[i];
    }
}

template <typename T>
void Merge_Sort(T *sourceArray, T *temp, int Start_Index, int End_Index) {
    if (Start_Index < End_Index) {
        int Mid_Index = (Start_Index + End_Index) / 2;
        Merge_Sort(sourceArray, temp, Start_Index, Mid_Index);
        Merge_Sort(sourceArray, temp, Mid_Index + 1, End_Index);
        Merge(sourceArray, temp, Start_Index, Mid_Index, End_Index);
    }
}

