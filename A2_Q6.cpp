#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    for(int i = 1 ; i<=n-2 ; i++){
    //star
    for(int j = 1 ; j <= n-i-1 ; j++){
        cout<<"*";
    }
    //space
    for(int j = 1 ; j<= 2*i + 3 - n; j ++ ){
        cout<<" ";
    }
    //star
    for(int j = 1 ; j<= n-i-1; j++){
    cout<<"*" ;
    }  
cout<<endl;
}
for(int i = 1 ; i<=n-3; i++){
    //star
    for(int j = 1 ; j<= i+1; j++){
        cout<<"*";
    }
    //space
    for(int j = 1 ; j<= n - 2*i - 1 ; j ++ ){
        cout<<" ";
    }
    //star
    for(int j = 1 ; j <= i+1 ; j++){
    cout<<"*";
    }  
cout<<endl;
}

    
}
