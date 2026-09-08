#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generatePascal(int n)
{
    vector<vector<int>> triangle;

    for (int i = 0; i < n; i++)
    {
        vector<int> row(i + 1, 1);

        for (int j = 1; j < i; j++)
        {
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }

        triangle.push_back(row);
    }

    return triangle;
}

int main()
{
    // n = 0
    vector<vector<int>> result0 = generatePascal(0);
    cout << "n = 0: " << result0.size() << " rows" << endl;

    // n = 1
    vector<vector<int>> result1 = generatePascal(1);
    cout << "n = 1: ";
    for (int x : result1[0])
        cout << x << " ";
    cout << endl;

    // n = 5
    vector<vector<int>> result5 = generatePascal(5);

    cout << "n = 5:" << endl;
    for (vector<int> row : result5)
    {
        for (int x : row)
            cout << x << " ";
        cout << endl;
    }

    // Verify row 5
    cout << "Row 5: ";
    for (int x : result5[4])
        cout << x << " ";
    cout << endl;

    return 0;
}
