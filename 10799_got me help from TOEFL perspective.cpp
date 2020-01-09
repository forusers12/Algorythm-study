#include <iostream>
#include <stack>
#include <string>
 
using namespace std;
 
int main(){
    string input;
    stack<char> s;
    int result = 0;
    
    cin >> input;
    
    for(int i = 0; i < input.size(); i++) {
        
        if(input[i] == '(') s.push(input[i]);        

        else { s.pop(); // 실제 코딩시에는 이렇게 안짤 수도 있지만, 보기에 가장 직관적이라서 복기용으로 이렇게 보존한다.
          
            if(input[i-1] == '(') result += s.size();
            
            //막대기의 끝일 경우 1을 더해준다.
            else result += 1; 
            /* 각 쇠막대기를 자르는 레이저가 적어도 한 개 존재, 
            레이저는 어떤 쇠막대기의 끝점과 겹치지 않아도 된다가 존재하므로, 이 식이 성립된다.
            */
        }
    }
    cout << result << endl;
    return 0;
}


/*
-------------
--------------
이런 경우의 조건은 어떻게 해결하는 지는 모르겠지만,
주어진 조건에 최선을 다하자.

- 가장 작은 파이프가 어떻게 쪼개어지는지 계산한다.
=> (()())

Q. 남아 있는 파이프 수로, 어떻게 총 개수를 앎?

=> 이 문제를 다시 건들고 싶지 않아서 순간 갈등했음.
- 오래걸릴 줄 알았는데, 1분 만에 풀었다.
- 그냥 흐름을 살펴봤을 뿐이다.
=> 기본기의 중요성.

*/