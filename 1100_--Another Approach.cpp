#include <iostream>

using namespace std;

int main() {

    int color = 0, answer = 0;
    bool rev = 1;
    string s;
    cin >> s;


    for (int i = 0; i < 64; i++) {

            if (i % 8 == 0) {
                rev = !rev;
            }
            
            if (rev == 0) {                
                if (i % 2 == 0) {
                    color = 0;
                }
                else {
                    color = 1;
                }            
            }
            else {
                if (i % 2 == 0) {
                    color = 1;
                }
                else {
                    color = 0;
                }                            
            }

        if(s[i] == 'F' && color == 0) {
            answer++;
        }
    }

    cout << answer;

    return 0;
}