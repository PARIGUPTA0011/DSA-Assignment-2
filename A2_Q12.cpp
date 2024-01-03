#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
        int a = 0, b = 1;

    for (int i = 1; i <= n; i++) {
        int c = a;
        for (int j = 1; j <= i; j++) {
            cout << c << "\t";
            c = a + b;
            a = b;
            b = c;
        }
        cout << endl;
    }
    
}
