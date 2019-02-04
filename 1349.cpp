
#include <iostream>
#include <cmath>

using namespace std ;

int main(int argc, char **argv)
{
    int a,b,c,N; 
    cin >> N ;
    
    if(N>2){
        cout << -1; 
    }else if(N==1){
        cout << "1 2 3";
    }else{
        cout << "3 4 5";
    }
}

