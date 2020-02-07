#include "iostream"
#include <math.h>
using namespace std;

int solution(int X, int Y, int D) {
    double distance = Y - X;
    int jumps = ceil(distance / D);
    return jumps;
}

int main(int args, char ** argv) {
    printf("frog will jump: %d", solution(stoi(argv[1]), stoi(argv[2]), stoi(argv[3])));
    return 0;
}