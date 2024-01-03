#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n;
    cin >> n;

    //write your code here
    for(int i = 1; i<= (n+1)/2 ; i++){
    for(int j = 1 ; j<=  (n-1)/2 ; j++){
        if(i== (n+1)/2){
            cout<<"*";
        } else {
            cout<<" ";
        }
    }
    for(int j = 1 ; j<= i ; j++){
        cout<<"*";
        
    }
cout<<endl;
}
for(int i = (n-1)/2 ; i>=1 ; i--){
    for(int j = 1 ; j<= (n-1)/2 ; j++){
        cout<<" ";
    }
    for(int j = 1 ; j<= i ; j++){
        cout<<"*";

    }
cout<<endl;
}

    
}
