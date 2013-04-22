#include <iostream>

using namespace std;

class Solution {
public:
    char *strStr(char *haystack, char *needle) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int len_haystack = strlen(haystack);
        int len_needle = strlen(needle);
        //cout << "len_haystack: " << haystack << " len: "<< len_haystack << " len_needle: " << needle << " len: " << len_needle << endl;
        if (len_needle > len_haystack)
            return NULL;
        else if(len_needle == len_haystack){
            if (strcmp(haystack, needle) == 0)
                return haystack;
            else
                return NULL;
        }else{
            for(int i=0; i <= len_haystack - len_needle; i++){
                if(strncmp(&haystack[i], needle, len_needle) == 0)
                    return haystack + i;
            }
            return NULL;
        }

    }
};

int main(){
    Solution s;
    char * a = s.strStr("aaaa", "aaab");
    /*
    char * a = "liwentao";
    cout << "size: " << sizeof(a) << endl;
    cout << &a[2] << endl;
    */
    cout << a << endl;
}
