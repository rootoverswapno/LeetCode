#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& v) {
        int n = v.size();
        int m = v[0].size();  
        int count = 0;

        for (int i = 0; i < n; ++i) {
            int col = m - 1;
            while (col >= 0) {
                if (v[i][col] < 0) {
                    count++;
                } else {
                    break; 
                }
                col--;
            }
        }
        return count;
    }
};

int main() {
    Solution sol;

    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    vector<vector<int>> v(rows, vector<int>(cols));

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> v[i][j];
        }
    }

    // Call the function and print the result
    int result = sol.countNegatives(v);
    cout << "Number of negative numbers: " << result << endl;

    return 0;
}
