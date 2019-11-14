// 영어 대소문자와 띄어쓰기만으로 이루어진 문자열이 주어진다. 이 문자열에는
// 몇 개의 단어가 있을까? 이를 구하는 프로그램을 작성하시오. 단, 한 단어가 여러 번 
// 등장하면 등장한 횟수만큼 모두 세어야 한다.

#include <iostream>

using namespace std;

int main()
{
    string str;
    int space = 0;

    /* 
        <cin.getline vs getline>
        char cs[20];
        cin.getline(cs, 20);
    */

    getline(cin,str);

    for(int i = 0; i < str[i]; i++) {
        
        if(str[i] == ' ') {
            space++;
        }
    }
    
    //Conservation Part
    if(str[0] != ' ') {
        space++;
    }
    if(str[str.size()-1] == ' ') {
        space--;
    }

    cout << space;

    return 0;
}