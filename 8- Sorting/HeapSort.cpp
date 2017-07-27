#include <exception>
using namespace std;

#include "HeapSort.h"


HeapSort::HeapSort()
{
}


HeapSort::~HeapSort()
{
}

void HeapSort::HeapSortShiftDown(int*data, size_t  start, size_t end)
{
    int root= start;
    while (root*2+1<end) {
        int child = root *2 +1;
        
        if ((child +1 < end) && (data[child]< data[child +1])) {
            child += 1;
        }
        
        if (data[root]< data[child]) {
            swap(data[child], data[root]);
            root = child;
        }
        else
            return;
    }
    
}

void HeapSort::SortData(int *data, size_t count)
{
    int start, end;
    
    for (start = (count-2)/2; start>= 0; start--) {
        HeapSortShiftDown(data, start, count);
    }
    for (end = count-1; end>0; end--) {
        swap(data[end], data[0]);
        HeapSortShiftDown(data, 0, end);
    }
}
