#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<int> result;
        result.push_back(1);
        vector<int> tmp_result;
        for (int j = 1; j <= rowIndex; j++){
            tmp_result.clear();
            for (int i = 0; i <= j; i++){
                if (i == 0)
                    tmp_result.push_back(1);
                else if(i == j)
                    tmp_result.push_back(1);
                else
                    tmp_result.push_back(result[i - 1] + result[i]);   
            }
            result = tmp_result;
        }
        return result;
    }

};


int main(){
    Solution s;
    //int A[] = {-1,4,2,1,9,10,3};
    vector<int> result;
    result = s.getRow(3);
    for (int i = 0; i < result.size(); i++){
        cout << result[i] << "\t";
    }
    cout << endl;
}
