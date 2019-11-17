// https://www.acmicpc.net/problem/2292
// 위의 그림과 같이 육각형으로 이루어진 벌집이 있다. 그림에서 보는 바와 같이 중앙의 방 1부터 시작해서 이웃하는 방에 돌아가면서 1씩 증가하는 번호를 주소로 매길 수 있다. 숫자 N이 주어졌을 때, 벌집의 중앙 1에서 N번 방까지 최소 개수의 방을 지나서 갈 때 몇 개의 방을 지나가는지(시작과 끝을 포함하여)를 계산하는 프로그램을 작성하시오. 예를 들면, 13까지는 3개, 58까지는 5개를 지난다.


#include <iostream>
using namespace std;

int main() {
    int n, a = 1;

    cin >> n; 

    // 1 7 19 37 61 
    // 6 12 18 24


    for(int i = 6; true; i+=6) {
        if (n == 1) {
            cout << 1;
            break;
        }        
        else if(n > a && n <= a+i) {
            cout << i/6+1;
            break;
        }

        a += i;
                
    }





    return 0;
}










