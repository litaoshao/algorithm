#include <iostream>

using namespace std;

class Solution {
public:
    int firstMissingPositive(int A[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        for (int i = 0; i < n; i++){
            if (A[i] == i + 1)
                continue;
            int tmp = A[i];
            while (tmp > 0 && tmp <= n && tmp != A[tmp - 1]){
                swap(tmp, A[tmp - 1]);
            }
        }
        int i = 0;
        for (i = 0; i < n; i++){
            if (A[i] != i + 1)
                break;
        }
        return i + 1;
    }

    void swap(int &a, int &b){
        int tmp = a;
        a = b;
        b = tmp; 
    }
};

int main(){
    Solution s;
    //int A[] = {-1,4,2,1,9,10,3};
    int A[] = {1};
    int a = s.firstMissingPositive(A, 1);
    /*
    char * a = "liwentao";
    cout << "size: " << sizeof(a) << endl;
    cout << &a[2] << endl;
    */
    cout << a << endl;
}
