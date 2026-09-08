#include <iostream>
#include <vector>
using namespace std;

int findMode(vector<int> arr)
{
    if (arr.empty())
        return -1;

    int mode = arr[0];
    int maxCount = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        int count = 0;

        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > maxCount)
        {
            maxCount = count;
            mode = arr[i];
        }
    }

    return mode;
}

int main()
{
    // Unique mode
    vector<int> arr1 = {1, 2, 2, 3, 4};
    cout << "Unique mode: " << findMode(arr1) << endl;

    // Multiple modes
    vector<int> arr2 = {1, 1, 2, 2, 3};
    cout << "Multiple modes: " << findMode(arr2) << endl;

    // Empty array
    vector<int> arr3;
    cout << "Empty array: " << findMode(arr3) << endl;

    return 0;
}
