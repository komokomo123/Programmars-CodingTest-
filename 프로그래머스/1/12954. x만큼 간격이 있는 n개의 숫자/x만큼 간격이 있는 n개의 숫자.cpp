#include <iostream>
#include <vector>
using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;

    for (int i = 1; i <= n; ++i) {
        long long value = (long long)x * i;
        answer.push_back(value);
    }

    return answer;
}

int main() {
    int x = 2;
    int n = 5;

    vector<long long> result = solution(x, n);

    for (long long num : result) {
        cout << num << " ";
    }

    return 0;
}