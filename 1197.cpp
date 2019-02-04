#include "iostream"

int test1197(){

    int x, y, x1, x2, y1, y2 ; 
    char posx, posy;
    
    int n ;
    std::cin >> n ;
    for( int i = 0; i < n ; i++){
        std::cin >> posx  ;
        std::cin >> posy  ;
        
        x = posx-'a';
        y = posy-'1';

        x1 = x - 1 >-1 ? ( x + 1 < 8 ? 2 : 1) : 1 ; 
        x2 = x - 2 >-1 ? ( x + 2 < 8 ? 2 : 1) : 1 ;
        y1 = y - 1 >-1 ? ( y + 1 < 8 ? 2 : 1) : 1 ;
        y2 = y - 2 >-1 ? ( y + 2 < 8 ? 2 : 1) : 1 ;
     
        std::cout << x1*y2 + x2*y1 << "\n";
    }
}