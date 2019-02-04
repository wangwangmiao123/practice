#include <iostream>
int test1877(){
    char passcode_lock_1[4],passcode_lock_2[4]; 
    char temp; 
    std::cin >> passcode_lock_1; 
    std::cin >> passcode_lock_2; 
    if((passcode_lock_2[3]-'0')%2 || 0 == (passcode_lock_1[3]-'0')%2){
        std::cout << "yes";
    }else{
        std::cout << "no";
    }
}