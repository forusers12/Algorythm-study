// 함수 solution은 정수 x와 자연수 n을 입력 받아, x부터 시작해 x씩 증가하는 숫자를 n개 지니는 리스트를 리턴해야 합니다. 다음 제한 조건을 보고, 조건을 만족하는 함수, solution을 완성해주세요.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    //vector<long long>::iterator it;
    

    
    answer.push_back(1);
    answer.push_back(3);
    //it=answer.begin();
    // it++;
    answer.erase(answer.end()-1);
    

    return answer;
}

int main()
{
    vector<long long> abc = solution(2,4);

    for(int i = 0; i < abc.size(); i++)
    {
        cout << abc[i] << '\n';
    }
    
    

    return 0;
}