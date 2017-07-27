#pragma once
#include "SortFactory.h"
class MergeSort :
public ISortAlgorithm
{
public:
    MergeSort();
    ~MergeSort();
    
    void SortData(int *data, size_t count);
    void _MergeLists(int *subArray, int count, int midIdx);
};

