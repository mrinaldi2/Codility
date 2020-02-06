#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solution(vector<int> &A) {
    int length = A.size();
    int xor_sum = 0;
    for (int i = 0; i < length; i++) {
        printf("%d ^ %d ^ %d = ", xor_sum, A[i], i+1);
        xor_sum = xor_sum ^ A[i] ^ (i + 1);
        printf("%d\n", xor_sum);
    }
    return xor_sum^(length + 1);
}

int main() {
    vector<int> A = {1,2,3,5,6};
    printf("Solutia este %d", solution(A));
    return 0;
}