#include <iostream>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    int sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }
    double average = (double)sum / numbers.size();
    return average;
}

int main() {
    vector<int> numbers1 = {1,2,3,4,5,6,7,8,9,10};
    cout << "평균: " << solution(numbers1) << endl;

    vector<int> numbers2 = {89,90,91,92,93,94,95,96,97,98,99};
    cout << "평균: " << solution(numbers2) << endl;

    return 0;
}
