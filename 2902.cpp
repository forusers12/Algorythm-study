#include <iostream>

using namespace std;

int main() {

    string s,answer;
    cin >> s;

    answer = s[0];
    
    for (int i = 1; i < s.size(); i++) {
        if(s[i] == '-') {
            answer += s[i+1];
        }
        else {
            continue;
        }
    }

    cout << answer;

    return 0;
}