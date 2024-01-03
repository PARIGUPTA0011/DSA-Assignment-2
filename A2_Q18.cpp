#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n;
    cin >> n;

    //write your code here
    
for(int i = 1 ; i<= (n-1)/2 ; i++){
    
    for(int j = 1 ; j<= n ; j++){
        if(i==j || i+j == n+1 || i == 1){
            cout<<"*";
        } else {
            cout<<" ";
        
        }
    
    }
cout<<endl;
   
}
for(int i = 1 ; i<= (n+1)/2 ; i++){
    //space
    for(int j = 1 ; j<= (n+1)/2 - i ; j++){
        cout<<" ";
    }
    //star
    for(int j = 1 ; j<= 2*i-1 ; j++){
        cout<<"*";
    }
    //space
    for(int j = 1 ; j<= (n+1)/2 - i ; j++){
        cout<<" ";
    }
cout<<endl;
}
    
}
