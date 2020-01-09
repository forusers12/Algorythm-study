#include <iostream>
#include <stack>
#include <vector>
 
std::stack<int> stk;
std::vector<char> ans;
int input_seq[100001];
 
int main()
{
    std::cin.sync_with_stdio(false);
 
    int n, cnt = 1;
    std::cin >> n;
 
    // 수열 입력
    for (int i = 1; i <= n; i++)
    {
        std::cin >> input_seq[i];
    }
 
    for (int i = 1; i <= n; i++)
    {
        // 스택에 1~n 삽입
        stk.push(i);
        ans.push_back('+');
        // 스택이 비어있지 않을 때 스택의 top 원소가 입력 수열에 존재하면 pop 시킨다
        while (!stk.empty() && (stk.top() == input_seq[cnt]))
        {
            stk.pop();
            ans.push_back('-');
            cnt++;
        }
    }
 
    // 입력된 수열을 만들 수 있는 경우에는 항상 스택이 비어있다. 비어있지 않으면 만들 수 없는 경우이기 때문에 NO를 출력한다.
    if (!stk.empty()) std::cout << "NO\n";
    else
    {
        for (int i = 0; i < ans.size(); i++)
        {
            std::cout << ans[i] << "\n";
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


*/