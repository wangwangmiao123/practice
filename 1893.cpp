//recheck some details
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std ;

int main(int argc, char **argv)
{
    char temp[3]= {0};
    int row = 0 ;
    char id; \
    cin >> temp ; 
    if(!temp[2]){
        row=(temp[0]-'0');id =temp[1];
    }else{
        row=temp[1]-'0'+10*(temp[0]-'0');id =temp[2];
    }
    if(row<3){
        if(id=='A' || id == 'D') cout << "window" ;
        else cout << "isile" ;
    }else if(row < 21){
        if(id=='A' || id == 'F') cout << "window" ;
        else cout << "isile" ;
    }else{
        if(id=='A' || id == 'K') cout << "window" ;
        else if(id=='C' || id == 'D' || id=='G' || id == 'H')cout << "isile" ;
        else{
            cout << "neither" ;
        } 
    }
}


