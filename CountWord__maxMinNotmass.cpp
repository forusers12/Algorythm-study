// 알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이
// 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.

#include <iostream>
#include <vector>

using namespace std;


int main()
{
    string str;
    vector<int> vec;

    // 아스키코드 91~96 특수문자 비스무리    

    for(int i = 0; i < 26; i++) {
        vec.push_back(0);
    }

    cin >> str;

    for (int i = 0; i < str.size(); i++) {
        
        for (int j = 65; j <= 122; j++) {
            if(j == 91)
                j = 97;

            if (str[i] == char(j)) {
                if (j < 97) {
                    vec[j-65]++;
                }
                else {
                    vec[j-97]++;
                }
            }
        }
    }
    
    
    int max = vec[0], index = 0, maxCount = 0;

    for(int i = 1; i < 26; i++) {
        if (max < vec[i]) {
            max = vec[i];
            index = i;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (max == vec[i]) {
            maxCount++;
        }
    }
    

    if (maxCount >= 2) {
        cout << '?';
    }
    else {
        cout << char(65+index);
    }



    return 0;
}