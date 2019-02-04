//review
// very typical problem
#include <iostream>
int test1313(){
    int n ; 
    std::cin >> n ; 
    unsigned char temp[n][n]; 
    for( int i = 0 ; i < n ; i++ ){
        for( int j = 0 ; j < n ; j++ ){
            int d ; 
            std::cin >> d ;
            temp[i][j] = (unsigned char)d; 
        }        
    }
    #ifdef TEST
    for( int i = 0 ; i < n ; i++ ){
        for( int j = 0 ; j < n ; j++ ){
            std::cout << (int)temp[i][j]; 
        }        
    }
    #endif
    
    for ( int i = 0 ; i <= 2*n-2; i++ ){
        for(int j=i>n-1?i-n+1:0; j<=i&&j<n; j++){
            std::cout << (int)temp[i-j][j];
            if(i!=2*n-2) std::cout <<" ";
        }
    }
}