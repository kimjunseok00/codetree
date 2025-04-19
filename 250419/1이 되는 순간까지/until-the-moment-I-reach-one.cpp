#include <iostream>

using namespace std;

int N;

int f(int a){
    if(a<10) return a;
    
    if((a/10)%2==0)
    return f(a/10) + a%10 ;
    else
    return f(a/10) ;

}
int main() {
    cin >> N;

    cout << f(N);

    return 0;
}