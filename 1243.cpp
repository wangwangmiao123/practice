#include <iostream>

using namespace std ;

int main(int argc, char **argv)
{
    char c ; 
    int rem = 0;
    while(cin >> c){
        if(c>='0' && c<= '9')
            rem = (rem * 10 + int(c) )%7 ;
        else
            break; 
    }
    cout << rem ; 
}

