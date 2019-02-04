//recheck some details
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std ;

int main(int argc, char **argv)
{
    int M, N ;
    cin >> N ; 
    char temp[2020] = {0};
    
    int i = 0 ;
    while(i++ < N) {
        int t ; 
        cin >> t; 
        temp[t] = 'f'; 
    }
    
    int j=0,tot = 0 ; 
    cin >> M; 
    while(j++ < M) {
        int t = 0 ; 
        cin >> t; 
        if(t>=2020 || 2 <=0) continue;
        if(temp[t]!=0){
            tot++ ;
        }
    }
    
    cout << tot ; 

}


