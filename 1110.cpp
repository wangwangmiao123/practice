
#include <iostream>
#include <cmath>

using namespace std ;

int main(int argc, char **argv)
{
    int a,b,c,d; 
    cin >> a>>b>>c>>d;
    if((c-a)%(b+d)>b) cout << a + b*((c-a)/(b+d))+b; 
    else{
        cout << a + b*((c-a)/(b+d)) ;    
    }
}

