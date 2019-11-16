#include <iostream>
using namespace std;


int main() {

    int sum = 0;
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'c') {
            if (str[i+1] == '=') {
                i++;
                sum++;
                continue;
            }
        }
        else if (str[i] == 'c') {
            if (str[i+1] == '-') {
                i++;
                sum++;
                continue;
            }
        }
        else if (str[i] == 'd') {
            if (str[i+1] == 'z') {
                if (str[i+2] == '=') {
                    i += 2;
                    sum++;
                    continue;
                }
            }
        }
        else if (str[i] == 'd') {
            if (str[i+1] == '-') {
                i++;
                sum++;
                continue;
            }
        }
        else if (str[i] == 'l') {
            if (str[i+1] == 'j') {
                i++;
                sum++;
                continue;
            }
        }
        else if (str[i] == 'n') {
            if (str[i+1] == 'j') {
                i++;
                sum++;
                continue;
            }
        }
        else if (str[i] == 's') {
            if (str[i+1] == '=') {
                i++;
                sum++;
                continue;
            }
        }
        else if (str[i] == 'z') {
            if (str[i+1] == '=') {
                i++;
                sum++;
                continue;
            }
        }
        for (int j = 97; j < 123; j++) {
            if (str[i] == (char)j) {
                sum++;
                continue;
            }  
        }

    }


    cout << sum;

    return 0;
}