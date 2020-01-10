#include <iostream>
#include <stack>
#include <vector>
 
using namespace std;

stack<int> stk;
vector<char> ans;
int input_seq[100001]; // 100000 -> 메모리초과
 
int main()
{
    cin.sync_with_stdio(false);
    
    int n, cnt = 1;
    cin >> n;
 
    for (int i = 1; i <= n; i++) {
        cin >> input_seq[i];
    }
 
    for (int i = 1; i <= n; i++) {
        stk.push(i); ans.push_back('+');
        /* empty 조건까지 넣어준 건, 안정성 때문인듯.
            !stk.empty() 없으면 -> 런타임 에러
        */
        while (!stk.empty() && (stk.top() == input_seq[cnt])) {
            // input_seq[cnt++] -> 후위라서 되는 줄 알았더니, 계산순서를 내 이상향대로 처리해주는게 아니네.
            stk.pop(); ans.push_back('-');
            cnt++;
        }
    }
 
    // 입력된 수열을 만들 수 있는 경우에는 항상 스택이 비어있다. 비어있지 않으면 만들 수 없는 경우이기 때문에 NO를 출력한다.
    if (!stk.empty()) cout << "NO\n";
    else {
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << "\n";
        }
    }
 
    
    return 0;
}


/*
1부터 n까지의 수를 스택에 넣었다가 뽑아 늘어놓음으로써, 하나의 수열을 만들 수 있다. 
이때, 스택에 push하는 순서는 반드시 오름차순을 지키도록 한다고 하자. 
=> 스택에 푸시하는 순서가 존재한다? 그렇다면, 가장 큰 순서부터 넣는다는 건가?

아니, 넣었다가 뽑아 늘어놓는다는 것은
1부터 n까지가 일단 다 들어가 있다는거고 

예제출력에서 푸시부터 시작하니까, 초기상태는 하나도 안들어가있는 상태이다.

[2]
코드문제가 아니라, 문제이해 자체가 문제.

=> 코드를 보고 문제를 이해한다.


*/