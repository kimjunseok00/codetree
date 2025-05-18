#include <iostream>
#include <vector>

using namespace std;

vector<int> josephus(int N, int K) {
    vector<int> people;
    vector<int> result;

    
    for (int i = 1; i <= N; ++i) {
        people.push_back(i);
    }

    int index = 0; 

    while (!people.empty()) {
        index = (index + K - 1) % people.size(); 
        result.push_back(people[index]);         
        people.erase(people.begin() + index);    
    }

    return result;
}

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> answer = josephus(N, K);

    for (int num : answer) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}