#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int left = -1;
        int right = s.size();
        char left_c, right_c;
        while (left < right){
            do{
                left += 1;
                left_c = s[left];
            }while(isalnum(left_c) == false && left < s.size());
            do{
                right -= 1;
                right_c = s[right];
            }while(isalnum(right_c) == false && right >= 0);
            if (tolower(left_c) != tolower(right_c))
                break;
                
        }
        if (left >= right)
            return true;
        else
            return false;
    }
};

int main(){
    Solution s;
    string test("A man, a plan, a canal: Panama");
    cout << s.isPalindrome(test) << endl;
}
