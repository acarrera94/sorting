#pragma once
#include "SortFactory.h"
class QuickSort :
public ISortAlgorithm
{
public:
    QuickSort();
    ~QuickSort();
    
    void SortData(int *data, size_t count);
};

