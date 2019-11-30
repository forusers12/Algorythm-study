#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main() {

    string s;
    int arr[26];

    for (int i = 0; i < 26; i++) {
        arr[i] = 0;
    }
    cin >> s;

    for (int i = 0; i < s.size(); i++) {

        for (int j = 0; j < 26; j++) { //48 65 97
            if (s[i] ==  (char)97+j) {
                arr[j]++;
            }
        }
    }

    for (int i = 0; i < 26; i++) {
        cout << arr[i] << ' '; 
    }

    return 0;
}