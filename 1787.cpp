#include "iostream"

int test1787(){
    int k, n, sum = 0, n_per_min; 
    std::cin  >> k >> n ;
    for(int i = 0 ; i < n ; i++){
        std::cin >> n_per_min ;
        sum += n_per_min; 
    }
    if(sum <= k * n ){
        std::cout << 0 ;
    }else{
        std::cout << sum - k*n;
    }
}