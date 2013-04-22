#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> grayCode(int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<int> result;
        result.push_back(0);
        if (n == 0)
            return result;
        int pow = 1;
        for (int i = 0; i < n; i++){
            for(int j = result.size() -1 ; j >= 0; j--)
                result.push_back(pow + result[j]);
            pow = pow * 2;
        }
        return result;        
    }
};

int main(){
    Solution s;
    //char * a = s.strStr("aaaa", "aaab");
    vector<int> i = s.grayCode(4);
    for (vector<int>::iterator it = i.begin(); it != i.end(); it++){
        cout << *it << endl;
    }
    /*
    char * a = "liwentao";
    cout << "size: " << sizeof(a) << endl;
    cout << &a[2] << endl;
    */
}
