#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        bool flag = (dividend > 0) ^ (divisor > 0);
        cout << flag << endl;
        if (dividend < 0)
            dividend = 0 - dividend;  
        if (divisor < 0)
            divisor = 0- divisor;
        if (dividend < divisor)
            return 0;

        int result = 0;
        int tmp_r = 1;
        long tmp_divisor = divisor;
        tmp_divisor << 1;
        while(dividend >= divisor){
            while (dividend >= (tmp_divisor << 1) && tmp_divisor > 0){
                tmp_r = tmp_r << 1;
                tmp_divisor = tmp_divisor << 1;
            }
            if (dividend >= tmp_divisor){ 
                result += tmp_r;
                dividend -= tmp_divisor;
            }
            tmp_divisor = tmp_divisor >> 1;
            tmp_r = tmp_r >> 1;
            
        }    
        if (flag)
            return 0 - result;
        else
            return result;
    }
};

int main(){
    Solution s;
    cout << s.divide(45, -4) << endl;
}
