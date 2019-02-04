#include "iostream"

int test2066(){

    int a,b,c ;
    std::cin >> a >> b >> c ;
    int result = a + b + c ;
    result = result > a + b -c ? a + b -c : result ; 
    result = result > a + b *c ? a + b *c : result ; 
    result = result > a - b +c ? a - b +c : result ; 
    result = result > a - b -c ? a - b -c : result ; 
    result = result > a - b *c ? a - b *c : result ; 
    result = result > a * b +c ? a * b +c : result ; 
    result = result > a * b -c ? a * b -c : result ; 
    result = result > a * b *c ? a * b *c : result ; 
    
    std::cout << result;
}