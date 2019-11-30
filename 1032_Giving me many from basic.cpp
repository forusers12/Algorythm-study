#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, check = 0;
    string s;
    vector<string> vec;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s;
        vec.push_back(s);
    }

    for (int i = 0; i < vec[0].size(); i++) {

        for (int j = 1; j < vec.size(); j++) {
            if(vec[0][i] == vec[j][i]) {
                check++;
            }            
        }

        if(check == n-1) {
            cout << vec[0][i];
        }
        else {
            cout << '?';
        }
        
        check = 0;
    
    }


    return 0;
}