#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double sum = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i]; // sum = sum + arr[i];
    }

    double answer = sum / arr.size();

    return answer;
}