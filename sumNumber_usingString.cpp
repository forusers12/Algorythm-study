// N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.
#include <iostream>
using namespace std;

int main()
{
    int n,sum = 0;
    char a;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;
        sum += a-48;
    }
    cout << sum;
    
    return 0;
}