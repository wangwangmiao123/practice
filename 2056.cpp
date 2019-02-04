//recheck some details
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std ;

int main(int argc, char **argv)
{
    int  n; 
    int sum = 0 , m;
    cin >> n ;
    int i = 0 ;

    while(i++ < n){
        cin >> m;
        sum += m ; 
        
    }
    
    double avg =  sum*1.0/n ; 
    if(sum == 5){
        cout << "personal" ;
    }else if(sum >=4.5){
        cout << "High";
    }else if(sum <=3){
        cout << "None" ; 
    }else {
        cout << "Common" ; 
    }
}


