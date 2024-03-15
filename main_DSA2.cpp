#include <iostream>
#include <vector>

using namespace std;
/*Write an efficient algorithm that takes an array A[n1...nn) of sorted integers and return an
array with elements that have been circularly shifted k positions to the right. For example a sorted
array A=[5, 15, 29, 35, 42] is converted to A[35, 42, 5, 15, 27, 29] after circularly shifted 2
positions, while the same array A =[5, 15, 29, 35, 42] is converted to A[27, 29, 35, 42, 5, 15] after
circularly shifted 4 positions. Write the recurrence relation of your solution and find the time
complexity of your algorithm using iterative method*/

vector<int>
performCircularShift(vector<int>& arr, int shiftAmount) {
    int size = arr.size();
    vector<int> shiftedArray(size);

    // Perform a normal right rotation by shiftAmount positions
    for (int i = 0; i < size; ++i) {
        int newPosition = (i + shiftAmount) % size;
        shiftedArray[newPosition] = arr[i];
    }

    return shiftedArray;
}

// Recurrence Relation: T(n)=O(n)
// Time complexity = O(n)


