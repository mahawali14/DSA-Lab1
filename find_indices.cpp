#include <iostream>
#include <vector>
using namespace std;

vector<int> findAllIndices(vector<int> arr, int key)
{
    vector<int> indices;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == key)
        {
            indices.push_back(i);
        }
    }

    return indices;
}

int main()
{
    // Multiple occurrences
    vector<int> arr1 = {2, 5, 2, 7, 2};
    vector<int> result1 = findAllIndices(arr1, 2);

    cout << "Multiple occurrences: ";
    for (int i : result1)
        cout << i << " ";
    cout << endl;

    // Key not present
    vector<int> arr2 = {1, 3, 5, 7};
    vector<int> result2 = findAllIndices(arr2, 4);

    cout << "Key not present: ";
    for (int i : result2)
        cout << i << " ";
    cout << endl;

    // Empty array
    vector<int> arr3;
    vector<int> result3 = findAllIndices(arr3, 5);

    cout << "Empty array: ";
    for (int i : result3)
        cout << i << " ";
    cout << endl;

    return 0;
}
