#include <exception>
using namespace std;

#include "QuickSort.h"


QuickSort::QuickSort()
{
}


QuickSort::~QuickSort()
{
}

void QuickSort::SortData(int *data, size_t count)
{
    if (count < 2)
        return;
    
    int i, j,pivotVal;
    
    pivotVal = data[count/2];
    
    for (i =0, j = count - 1; ; i++, j--) {
        while (data[i] < pivotVal) {
            i++;
        }
        while (pivotVal < data[j]) {
            j--;
        }
        if (i>= j) {
            break;
        }
        swap(data[i], data[j]);
    }
    
    SortData(data, i);
    
    SortData(data +i, count -i);
    
}
