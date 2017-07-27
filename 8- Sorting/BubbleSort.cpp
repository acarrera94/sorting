#include <exception>
using namespace std;

#include "BubbleSort.h"


BubbleSort::BubbleSort()
{
}


BubbleSort::~BubbleSort()
{
}

void BubbleSort::SortData(int *data, size_t count)
{
    bool sorted;
    
    for (int n = count; n>= 1; n--) {
        sorted = true;
        for (int i = 1; i<n ; i++) {
            if (data[i-1]> data[i]) {
                sorted = false;
                
                swap(data [i], data[i-1]);
            }
        }
        if (sorted) {
            break;
        }
    }
}
