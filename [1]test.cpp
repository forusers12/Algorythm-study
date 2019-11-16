#include <iostream>
#include <math.h>
#include <vector>

using namespace std;


int main() {

    int n = 0, a, div;
    
    cin >> n >> a;

    vector<int> vec;
    for (int i = 0; i < n; i++) {
        vec.push_back(0);
    }


    for (int i = 0; i < n; i++) {
        div = pow(2, i);
        if (a % div == 0) {
            vec[i] = 1;            
        }
        cout << vec[i];
    }
    

    return 0;
}