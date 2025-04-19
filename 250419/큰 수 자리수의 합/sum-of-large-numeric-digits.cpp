#include <iostream>

using namespace std;

int a, b, c;
int arr[10] ;
int f(int num){
    if(num==0) return 0; 
    return (num%10) + f(num/10);
}

int sum(int x, int y,int z){
    if(x<1 && y<1 && z<1 ) return 0 ;
    return sum(x/10 ,y/10,z/10) + f( (x%10) * (y%10)* (z%10)); 
}
int main() {
    cin >> a >> b >> c;

    cout << sum(a,b,c) ;

    return 0;
}