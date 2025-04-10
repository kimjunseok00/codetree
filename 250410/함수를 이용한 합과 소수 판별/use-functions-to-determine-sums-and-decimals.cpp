#include <iostream>

using namespace std;

bool gray(int m){
    if(m<2) return false;
    for(int i=2 ; i*i<=m ; i++){
        if(m%i==0)
        return false;
    }
    return true;
}

bool ignore(int n){
    int ones = n%10 ;
    int tens = (n/10)%10 ;
    return (ones+tens)%2==0 ;
}

int main() {
    int a, b, count=0;
    cin >> a >> b;
    for(int i=a ; i<=b ; i++){
        if(gray(i) && ignore(i))
                count ++;
        }
    cout << count ;
    return 0;
}