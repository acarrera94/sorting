#include <exception>
using namespace std;

#include "InsertionSort.h"


InsertionSort::InsertionSort()
{
}


InsertionSort::~InsertionSort()
{
}

void InsertionSort::SortData(int *data, size_t count)
{
    for (int i=1; i < count; i++) {
        for (int j = i; j>0; j--) {
            if (data[j-1] > data [j]) {
                swap(data[j-1] , data [j]);
            }
            else
                break;
        }
    }
}
