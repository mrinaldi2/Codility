#include <vector>
#include <iostream>
#include <numeric>
using namespace std;

int solution(vector<int> &A) {
    int sum = accumulate(A.begin(), A.end(), 0);
    int sumRight = sum;
    int sumLeft = 0;
    int min = INT32_MAX;
    for(unsigned int i = 0; i < A.size() - 1; i++) {
        sumRight -= A[i];
        sumLeft += A[i];
        min = (min < abs(sumLeft - sumRight)) ? min : abs(sumLeft - sumRight); 
    }
    return min;
}

int main() {
    vector<int> v = {-1000, 1000};
    printf("%d", solution(v));
}