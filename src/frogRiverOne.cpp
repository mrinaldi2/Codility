#include <vector>
#include <set>
#include <iostream>
using namespace std;

int solution(int X, vector<int> &A)
{
    set<int> s;
    for (unsigned int i = 0; i < A.size(); i++)
    {
        s.insert(A[i]);
        if ((int)s.size() == X) return i;
    }
    return -1;
}

int main(int args, char ** argv) {
    vector<int> v = {2,1,5,3,2,4};
    printf("%d", solution(5, v));
    return 0;
}