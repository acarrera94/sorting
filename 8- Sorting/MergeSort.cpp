#include <exception>
using namespace std;

#include "MergeSort.h"


MergeSort::MergeSort()
{
}


MergeSort::~MergeSort()
{
}

void MergeSort::SortData(int *data, size_t count)
{
    if (count < 2) return;
    // Divide the list in half
    int m = count / 2;
    // Call merge-sort on each half
    SortData(data, m);
    SortData(data + m, count - m);
    // Now merge the lists back together.
    _MergeLists(data, count, m);
    
}

void MergeSort::_MergeLists(int *subArray, int count, int midIdx) {
    // Allocate a temp buffer to merge the two halves
    int *tmpList = new int[count];
    
    
    for (int tmpCount = 0, leftIdx = 0, rightIdx = midIdx; tmpCount < count; tmpCount++) {
        // If there's nothing left on the right side, copy the remainder of the stuff on
        // the left side
        if (rightIdx == count) tmpList[tmpCount] = subArray[leftIdx++];
        // Else if the left side is empty, copy the rest of the right side, etc.
        
        
        else if (leftIdx == midIdx) tmpList[tmpCount] = subArray[rightIdx++];
        // Both sides still have data, so copy the next smallest item.
        
        
        else if (subArray[rightIdx] < subArray[leftIdx]) tmpList[tmpCount] = subArray[rightIdx++];
        
        
        else tmpList[tmpCount] = subArray[leftIdx++];
        // Now copy the merged list back to the original array
        
    }
    for (int i = 0; i < count; i++)
    { subArray[i] = tmpList[i];
        // and de-allocate the temp buffer.
    }
    delete []tmpList;
}
