// 조건에 중복이 들어가지 않은 문제.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,check = 0;
    vector<string> str1, str2;
    string temp;

    cin >> a >> b;



    for (int i = 0; i < a; i++) {
        cin >> temp;
        str1.push_back(temp);
    }

    for (int i = 0; i < b; i++) {
        cin >> temp;
        str1.push_back(temp);
    }    
    sort(str1.begin(), str1.end());

    for (int i = 0; i < a+b - 1; i++) {
        if(str1[i] == str1[i+1]) {
            check++;
            str2.push_back(str1[i]);
            i++;
        }
    }

    cout << check << '\n';

    for (int i = 0; i < str2.size(); i++) {
        cout << str2[i] << '\n';
    }

    return 0;
}