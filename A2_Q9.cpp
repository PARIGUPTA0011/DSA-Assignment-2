#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    for(int i = 1 ; i<= (n+1)/2 ; i++){
    // star
    for(int j = 1 ; j<=n ; j++ ){
        if(i==j || i+j == n+1){
            cout<<" * ";
        } else {
            cout<<"  ";
        }
    }
    //space
    for(int j =1 ; j<=n-2*i; j++){
        cout<<"  ";
    } 
cout<<endl;  
}
for(int i = (n-1)/ 2 ; i>=1 ; i--){
    for(int j = 1 ; j <= n ; j++){
        if(i+j == n+1 || i==j){
            cout<<" * ";
        } else {
            cout<<"  ";
        }
    
    }
    for(int j = 1 ; j<= 2*i-1 ; j++){
        cout<<"  ";
    }
cout<<endl;
}

}
