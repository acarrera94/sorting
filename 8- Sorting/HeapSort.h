#pragma once
#include "SortFactory.h"
class HeapSort :
public ISortAlgorithm
{
public:
    HeapSort();
    ~HeapSort();
    
    void SortData(int *data, size_t count);
    void HeapSortShiftDown(int*data, size_t  start, size_t end);
};

