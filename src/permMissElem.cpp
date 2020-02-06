#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solution(vector<int> &A) {
    int length = A.size();
    int xor_sum = 0;
    for (int i = 0; i < length; i++) {
        xor_sum = xor_sum ^ A[i] ^ (i + 1);
    }
    return xor_sum^(length + 1);
}

int main() {
    vector<int> A = {};
    printf("Solutia este %d", solution(A));
    return 0;
}