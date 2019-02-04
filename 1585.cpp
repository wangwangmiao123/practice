#include "iostream"

#include "port.h"
using namespace std; 

int test1585(){
    int N;
    char name_buf[20];
    int count[3] = {0,0,0}; 
    cin >> N ;
    
    int i = 0 ; 
    while(i++<N){
        
        cin.getline(name_buf, 20); 
        if(name_buf[0] == 'E') count[0]++; 
        else if(name_buf[0] == 'M') count[1]++;
        else count[2]++;
    }
    cout << (count[0] > count [1] && count[0] > count [2] ? "Emperor Penguin" : 
            (count[1] > count [2] ? "Macaroni Penguin": "Little Penguin"));
}