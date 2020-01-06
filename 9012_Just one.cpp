#include <iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string str; cin >> str;
        int count = 0;

        for (int j = 0; j < str.size() && count >= 0; j++) {
            if (str[j] == '(') count++;
            else count--;
        }

        if (count == 0) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}
