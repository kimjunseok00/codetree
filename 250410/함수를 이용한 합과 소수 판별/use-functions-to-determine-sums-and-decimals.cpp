#include <iostream>

using namespace std;

int a, b;
int hi(int x,int y){
    int sam=0,sum=0 ;
    for(int i=2 ; i<x; i++){
        if(x % i ==0 && x % 2 == 0)
            sum++;
    }
    for(int i=2 ; i<y; i++){
        if(y % i ==0 && y % 2 ==0)
            sam++;
    }
        return (sam-sum) ;
}

int main() {
    cin >> a >> b;

    cout << hi(a,b) ;
    return 0;
}