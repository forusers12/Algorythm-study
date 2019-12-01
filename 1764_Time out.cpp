// 조건에 중복이 들어가지 않은 문제.

#include <iostream>
#include <vector>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,check = 0;
    vector<string> str1, str2, str3;
    string temp;

    cin >> a >> b;

    for (int i = 0; i < a; i++) {
        cin >> temp;
        str1.push_back(temp);
    }

    for (int i = 0; i < b; i++) {
        cin >> temp;
        str2.push_back(temp);

        for (int j = 0; j < str1.size(); j++) {
            if (str2[0] == str1[j]) {
                check++;
                str3.push_back(str1[j]);
                str1.erase(str1.begin() + j);
                break;
            }
        }        

        str2.erase(str2.begin());
    }

    

    cout << check << '\n';    
    for (int i = 0; i < str3.size(); i++) {
        cout << str3[i] << '\n';
    }


    return 0;
}