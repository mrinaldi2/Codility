#include <vector>
#include <iostream>
using namespace std;
// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size() <= 1) {
        return A;
    }
    for(int i = 0; i < K; i++) {
        int value = A[A.size() - 1];
        A.pop_back();
        A.insert(A.begin(), value);
    }
    return A;
}

int main() {
    vector<int> test = {1,2,3,4,5,6};
    vector<int> result = solution(test, 2);
    for(auto i = result.begin(); i < result.end(); i++) {
        printf("Returned value %d\n", (*i)); 
    }
}