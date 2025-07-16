#include <string>
#include <vector>
#include <numeric>

bool solution(int x) {
    int sumOfDigits = 0;
    int tempX = x;

    while (tempX > 0) {
        sumOfDigits += tempX % 10;
        tempX /= 10;
    }

    return (x % sumOfDigits == 0);
}