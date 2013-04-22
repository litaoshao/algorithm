#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> result;
    vector<string> generateParenthesis(int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        result.clear();
        string base = "";
        generate_one(n, n, base);
        return result;
    }

    void generate_one(int left, int right, string base){

        if (left == 0){
            string new_base(base);
            for (int i = 0; i< right; i++){
                new_base += ')';
            }
            result.push_back(new_base);
            return;
        }

        if (left <= right){
            string new_base = base + '(';
            int new_left = left - 1;
            generate_one(new_left, right, new_base); 
        }

        if (left <  right){
            string new_base = base + ')';
            generate_one(left, right - 1, new_base);
        }
        
    }
};

int main(){
    Solution s;
    //char * a = s.strStr("aaaa", "aaab");
    vector<string> i = s.generateParenthesis(3);
    for (vector<string>::iterator it = i.begin(); it != i.end(); it++){
        cout << *it << endl;
    }
    /*
    char * a = "liwentao";
    cout << "size: " << sizeof(a) << endl;
    cout << &a[2] << endl;
    */
}
