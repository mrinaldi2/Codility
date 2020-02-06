#include <iostream>
using namespace std;

int solution(int N) {
    int max_gap = 0;
    int current_gap = 0;
    // Skip the tailing zero(s)
    while (N > 0 and N%2 == 0) {
        N = N / 2;
    }
    while (N > 0) {
        int remainder = N%2;
        if (remainder == 0) {
            // Inside a gap
            current_gap += 1;
        } else {
            // Gap ends
            if (current_gap != 0) {
                max_gap = current_gap > max_gap ? current_gap : max_gap;
                current_gap = 0;
            }
        }
        N = N / 2;
    }
    return max_gap;
}

//mySolution
int solution2(int N) {
    // write your code in C++14 (g++ 6.2.0)
    bool started = false;
    int previous = 0;
    int max = 0;
    int sum = 0;
    while(N > 0) {
        started = (previous == 1 && ((N & 1) == 0)) ? !started : started;
        started = (previous == 0 && ((N & 1) == 1) && started) ? false : started;
        previous = N & 1;
        sum += (started && ((N & 1) == 0)) ? 1 : (!started) ? -sum : 0;
        max = (sum > max) ? sum : max;
        N = N >> 1;
    }
    return max;
}


int main() {
    cout << "Max: " << solution(1041) << endl;
    cout << "Max: " << solution(1041) << endl;
    return 0;
}