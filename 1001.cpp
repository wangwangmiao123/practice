#define VERSION_1
#include "p1000.h"
#include "iostream"
#include "stdio.h"
#include "math.h"

int test1001(){
    int a ; 
    #ifdef VERSION_1 
    while( std::cin >> a)printf("%.4f\n",sqrt(1.0*a)); 
    #endif

}