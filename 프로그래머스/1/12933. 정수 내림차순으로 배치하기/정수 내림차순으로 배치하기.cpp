#include <string>
#include <vector>
#include <algorithm>
#include <functional>

long long solution(long long n) {
    std::string s = std::to_string(n);
    std::sort(s.begin(), s.end(), std::greater<char>());
    return std::stoll(s);
}