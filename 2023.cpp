//check 
// need to be more extendable, using a sorted list, and bin search 
// or use more fancy index, like hash index. 
#include "iostream"

int test2023(){
    int n, count = 0, pos=1; 
    char temp[10];
    std::cin >> n ;
    for ( int i = 0 ; i <  n ; i++){
        std::cin >> temp;
        int tobe; 
        if(temp[0]=='A' || temp[0]=='P' || temp[0]=='O' || temp[0]=='R' ) tobe = 1; 
        else if(temp[0]=='B' || temp[0]=='M' || temp[0]=='S') tobe = 2; 
        else tobe = 3; 
        count += tobe - pos > 0 ?  tobe - pos  : pos - tobe  ;
        pos = tobe; 
    }
    std::cout << count ; 

}