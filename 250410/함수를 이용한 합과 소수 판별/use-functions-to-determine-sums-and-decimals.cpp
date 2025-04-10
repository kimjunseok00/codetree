#include <iostream>

using namespace std;

int a, b;
int hi(int x,int y){
    int sum = x/10+x%10+y/10+y%10;
    if(sum%2==0)
        return sum ;
}
int main() {
    cin >> a >> b;

    cout << hi(a,b) ;
    // Please write your code here.

    return 0;
}