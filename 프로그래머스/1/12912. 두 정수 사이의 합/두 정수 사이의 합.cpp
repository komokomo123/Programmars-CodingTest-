#include <iostream>
using namespace std;

long long solution(int a, int b) {
    int n = abs(a - b) + 1;
    int c = (a + b);
    long long answer = (long long)c * n / 2;
    return answer;
}