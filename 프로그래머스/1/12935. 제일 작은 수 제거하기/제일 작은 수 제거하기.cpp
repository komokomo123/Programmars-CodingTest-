#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    int minValue = *min_element(arr.begin(), arr.end());
    
    vector<int> answer;
    for (int num : arr) {
        if (num != minValue) {
            answer.push_back(num);
        }
    }
    
    if (answer.empty()) {
        answer.push_back(-1);
    }
    
    return answer;
}