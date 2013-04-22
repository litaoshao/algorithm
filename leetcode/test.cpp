#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> result;
    void divide(string str, int total, int left_use, int right_use)
    {
        if(left_use == total)
        {
            int i;
            for(i=right_use; i<total; ++i)
                str.insert(left_use + i,1,')');
            result.push_back(str);
            return;
        }
        if( left_use >= right_use )
        {
            str.insert(left_use + right_use, 1, '(');
            divide(str, total, left_use + 1, right_use);
            str.erase(left_use + right_use);

        }
        if( left_use > right_use )
        {
            str.insert(left_use + right_use, 1, ')');
            divide(str, total, left_use, right_use + 1);
            str.erase(left_use + right_use);
        }
    }
    vector<string> generateParenthesis(int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        result.clear();
        string str1;
        divide(str1, n, 0, 0);
        return result;
    }
};

int main(){
    Solution s;
    //char * a = s.strStr("aaaa", "aaab");
    vector<string> i = s.generateParenthesis(4);
    for (vector<string>::iterator it = i.begin(); it != i.end(); it++){
        cout << *it << endl;
    }
    /*
    char * a = "liwentao";
    cout << "size: " << sizeof(a) << endl;
    cout << &a[2] << endl;
    */
}
