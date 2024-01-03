#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    for(int i = 1 ; i<=(n+1)/2 ; i++){
    for(int j = 1 ; j<= n ; j++){
        if(i+j==(n+3)/2 ||j-i == (n-1)/2 ){
            cout<<"*";
        } else {
            cout<<" ";
        }
    }
cout<<endl;
}

for(int i = (n-1)/2 ; i >= 1 ; i--){
    for(int j = 1; j<= n ; j++){
          if(i+j == (n+3)/2 || j-i == (n-1)/2){
               cout<<"*";

          } else {
            cout<<" ";
          }
}
cout<<endl;
}
    
}
