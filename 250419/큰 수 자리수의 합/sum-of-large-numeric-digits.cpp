#include <iostream>

using namespace std;

int a, b, c;

long long f(long longnum){
    if(num==0) return 0; 
    return (num%10) + f(num/10);
}

int main() {
    
    cin >> a >> b >> c;

    long long result = a*b*c; 
    
    cout << f(result) ;

    return 0;
}