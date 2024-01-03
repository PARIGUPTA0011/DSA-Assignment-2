#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;

    //write your code here
    for(int i = 1 ; i<= n ; i++){
    //num
    for(int j = 1 ; j<= i; j++){
        cout<<j;
    }
    //space
    for(int j = 1 ; j<= 2*n - 2*i -1 ; j++){
        cout<<" ";
    }
    for(int j = i; j>=1 ; j--){
        if(j==n){
            continue;
        }
         cout<<j;
    }

cout<<endl;

}
    
}
