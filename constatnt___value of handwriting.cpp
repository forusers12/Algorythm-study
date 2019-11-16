// 상근이의 동생 상수는 수학을 정말 못한다. 상수는 숫자를 읽는데 문제가 있다. 
// 이렇게 수학을 못하는 상수를 위해서 상근이는 수의 크기를 비교하는 문제를 내주었다. 
// 상근이는 세 자리 수 두 개를 칠판에 써주었다. 그 다음에 크기가 큰 수를 말해보라고 했다.
// 상수는 수를 다른 사람과 다르게 거꾸로 읽는다. 예를 들어, 734과 893을 칠판에 적었다면, 
// 상수는 이 수를 437과 398로 읽는다. 따라서, 상수는 두 수중 큰 수인 437을 큰 수라고 말할 것이다.
// 두 수가 주어졌을 때, 상수의 대답을 출력하는 프로그램을 작성하시오.

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int a,b,a_rev = 0, b_rev = 0;

    vector<int> vec;

    for (int i = 0; i < 6; i++)
        vec.push_back(0);


    cin >> a >> b;

    for (int i = 0; i < 3; i++, a = a/10)
    {
        vec[i] = a % 10; 
        a_rev += vec[i] * pow(10,2-i);
    }
    // 734
    // 0 = 4
    // 1 = 3
    // 2 = 7 

    for (int i = 3; i < 6; i++, b = b/10)
    {
        vec[i] = b % 10; 
        b_rev += vec[i] * pow(10,5-i);
    }

    
    // // 내게 필요한 정의 
    // // 나머지 : 10으로 나눴을 때 얼마나 나머지가 나오는 지
    // // 몫 : 10으로 나눴을 때 얼마나 나눌 수 있는 지 
        
    if ( a_rev >= b_rev ) {
        cout << a_rev;
    }
    else {
        cout << b_rev;
    }

        
    

    return 0;
}