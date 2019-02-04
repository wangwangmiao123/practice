#include "iostream"
#include "cstring"
int test2100(){
    char name[25]; 
    int total = 2, num_res;
    std::cin >> num_res; 
    for(int i = 0 ; i < num_res ; i++ ){
        std::cin >> name;
        
    }
    if(total == 13)total++ ;
    std::cout << total*100;
}