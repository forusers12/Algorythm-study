// https://programmers.co.kr/learn/courses/30/lessons/17682
// 카카오톡 게임별의 하반기 신규 서비스로 다트 게임을 출시하기로 했다. 다트 게임은 다트판에 다트를 세 차례 던져 그 점수의 합계로 실력을 겨루는 게임으로, 모두가 간단히 즐길 수 있다.
// 갓 입사한 무지는 코딩 실력을 인정받아 게임의 핵심 부분인 점수 계산 로직을 맡게 되었다. 다트 게임의 점수 계산 로직은 아래와 같다.
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int solution(string str) {
    int answer = 0, add = 0, x = 0;


    
    for(int i = 1; i < str.size(); i++) {

        if (str[i] == 'S') {
            x = 1;
        }
        
        else if(str[i] == 'D') {
            x = 2;
        }

        else if(str[i] == 'T') {
            x = 3;
        }

        // if (str[i-1] == '0') {
        //     if (str[i-2] == '1') {
        //         add = pow(10,x);
        //     }
        // }
        // else {
        //     add = pow(str[i-1]-48,x);
        // }
        
        add = pow(str[i-1]-48,x);

        if (str[i+1] == '*') {
            add = add * 2;
        }
        else if(str[i+1] == '#') {
            add = add * -1;
        }

        answer += add;
        add = 0;
    }
    
    
    cout << answer;

    return answer;    
}

int main() {

    string str;
    cin >> str;
    solution(str);
    
    return 0;
}