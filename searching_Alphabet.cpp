// 알파벳 소문자로만 이루어진 단어 S가 주어진다. 각각의 알파벳에 대해서, 단어에 포함되어 
// 있는 경우에는 처음 등장하는 위치를, 포함되어 있지 않은 경우에는 -1을 출력하는 프로그램을 작성하시오.
// 'a' : 97   'A' : 65  '0' : 48 알파벳 26개
#include <iostream>
using namespace std;

int main()
{
    int check = 0;
    string str;
    cin >> str;
    

    for (int i = 0; i < 26; i ++) {
        check = 0;

        for (int j = 0; j < str.size(); j++) {
            if (char(97 + i) == str[j])
            {
                cout << j << ' ';
                check = 1;
                break;
            }
        }

        if (check == 0)        
            cout << -1 << ' ';

    }            
                

    return 0;
}