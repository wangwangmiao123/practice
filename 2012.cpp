#include "iostream"

int test2012(){
    int f; 
    std::cin >> f; 
    
    if( f > 0 && f < 12 ){
        if( (12-f)*45 > 240 ){
            std::cout << "NO\n" ;
        }else{
            std::cout << "YES\n" ;
        }
    }
}