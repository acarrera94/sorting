#include <exception>
using namespace std;

#include "ShellSort.h"


ShellSort::ShellSort()
{
}


ShellSort::~ShellSort()
{
}

void ShellSort::SortData(int *data, size_t count)
{
        int gap = count / 2;
    while (true) {
        
            // The outer loop counts forward, starting at
            // position gap.
            for (int i = gap; i < count; i++)
            {
            // Save the current item in a temp variable.
                int temp = data[i];
            // The inner loop starts at position i and counts
                // backwards, stopping at gap.
                int j; for (j = i; j >= gap; j -= gap)
            {
                // Shift all earlier gap-sorted elements up
                // until the correct location is found for
                // temp.
                if (data[j - gap] > temp) data[j] = data[j - gap]; else break;
            }
            data[j] = temp;
        } 
        // Step down the gap-size
            if (gap == 1) break;
        gap /= 2;
    }

}
