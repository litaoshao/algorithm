#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector< vector<int> > generate(int numRows) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector< vector<int> > result;
        if (numRows == 0)
            return result;
        vector<int> row0;
        row0.push_back(1);
        result.push_back(row0);
        for (int i = 1; i < numRows; i++){
            vector<int> new_row;
            for (int j = 0; j <= i; j++){
                if (j == 0)
                    new_row.push_back(result[i - 1][j]);
                else if(j == i)
                    new_row.push_back(result[i - 1][j - 1]);
                else
                    new_row.push_back(result[i - 1][j] + result[i - 1][j -1]);
            }
            result.push_back(new_row);
        }
        return result;
    }
};

int main(){
    Solution s;
    //int A[] = {-1,4,2,1,9,10,3};
    vector< vector<int> > result;
    result = s.generate(3);
    for (int i = 0; i < result.size(); i++){
        for (int j = 0; j < result[i].size(); j++){
            cout << result[i][j] << "\t";    
        }
        cout << endl;
    }
}
