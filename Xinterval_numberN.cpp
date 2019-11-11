// 함수 solution은 정수 x와 자연수 n을 입력 받아, x부터 시작해 x씩 증가하는 숫자를
// n개 지니는 리스트를 리턴해야 합니다. 다음 제한 조건을 보고, 조건을 만족하는 함수, 
// solution을 완성해주세요.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    
    for(int i = 1; i <= n; i++)
        answer.push_back(x*i);

    return answer;
}

int main()
{
    vector<long long> abc;
    int x,n;
    cin >> x >> n;
    abc = solution(x,n);

    for(int i = 0; i < abc.size(); i++)
        cout << abc[i];

    return 0;
}