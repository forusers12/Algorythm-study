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