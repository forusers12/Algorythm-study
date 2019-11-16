// Now see the pattern:
// 4! = 5!/5 = 24
// 3! = 4!/4 = 6
// 2! = 3!/3 = 2
// 1! = 2!/2 = 1
// 0! = 1!/1 = 1

#include <iostream>
using namespace std;


int factorial(int n) {
    
    if (n > 1) {
        return n*factorial(n-1);
    }
    else if (n == 0) {
        return 1;
    }
    else {
        return n;
    }
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n); 

    return 0;
}