// you can use includes, for example:
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    sort(A.begin(), A.end());
    int value = 0;
    int count = 0;
    for(auto i = A.begin(); i < A.end(); i++) {
        if(value != (*i)) {
            if(count >= 1 && count%2 != 0) {
                return value;
            }
            count = 1;
            value = (*i);
        } else {
            count++;
        }
    }
    return value;
}

int main() {
    vector<int> A = {4,4,5,6,7,7,3,2,3,2,3,4,3,5,3,4,3,5};
    printf("odd value is: %d" , solution(A));
}