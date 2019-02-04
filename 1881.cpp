//recheck some details
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std ;

int main(int argc, char **argv)
{
    int h,w,n;
    int l = 1 ; 
    cin >> h >> w >>n; 
    
    char buf[w] = {0};
    int i = 0 , lft = w;  
    while(i++ < n )
    {
        cin >> buf ;
        if(strlen(buf)>lft){
            l++;
            lft=w-strlen(buf)-1;
        }else{
            lft -= strlen(buf)+1;
        }
        
        if(lft<=0) {
            l++;
            lft = w;
        }
    }
    cout << l/h + (l%h?1:0);
}


